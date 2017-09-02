//
//  InjectorWrapper.m
//  Dark
//
//  Created by Erwan Barrier on 8/6/12.
//  Copyright (c) 2012 Erwan Barrier. All rights reserved.
//
#import <Cocoa/Cocoa.h>
#import <ServiceManagement/ServiceManagement.h>
#import <mach/mach_error.h>

#import "DKInjector.h"
#import "DKInjectorProxy.h"
#import "DKConstant.h"

@implementation DKInjectorProxy

+ (BOOL)inject:(NSError **)error {
  NSConnection *c = [NSConnection connectionWithRegisteredName:@"com.erwanb.MachInjectSample.Injector.mach" host:nil];
  assert(c != nil);

  DKInjector *injector = (DKInjector *)[c rootProxy];
  assert(injector != nil);

  pid_t pid = [[[NSRunningApplication runningApplicationsWithBundleIdentifier:@"cn.futu.Niuniu"]
                lastObject] processIdentifier];
  
  NSString *bundlePath = [[NSBundle mainBundle] pathForResource:@"Payload" ofType:@"bundle"];
    
    NSString* aimPath = [NSHomeDirectory() stringByAppendingPathComponent:@"/Library/Containers/cn.futu.Niuniu/Data/Documents/Payload.bundle"];
    
    if ([[NSFileManager defaultManager] fileExistsAtPath:aimPath]) {
        [[NSFileManager defaultManager] removeItemAtPath:aimPath error:nil];
    }
    if (![[NSFileManager defaultManager] copyItemAtPath:bundlePath toPath:aimPath error:error]) {
        return NO;
    }
    
  NSLog(@"Injecting Finder (%@) with %@", [NSNumber numberWithInt:pid], bundlePath);

  mach_error_t err = [injector inject:pid withBundle:[bundlePath fileSystemRepresentation]];

  if (err == 0) {
    NSLog(@"Injected Finder");
    return YES;
  } else {
    NSLog(@"an error occurred while injecting Finder: %@ (error code: %@)", [NSString stringWithCString:mach_error_string(err) encoding:NSASCIIStringEncoding], [NSNumber numberWithInt:err]);

    *error = [[NSError alloc] initWithDomain:DKErrorDomain
                                        code:DKErrInjection
                                    userInfo:@{NSLocalizedDescriptionKey: DKErrInjectionDescription}];

    return NO;
  }
}

@end
