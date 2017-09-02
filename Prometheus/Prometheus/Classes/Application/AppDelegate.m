//
//  AppDelegate.m
//  Prometheus
//
//  Created by Dong Zhao on 2017/8/26.
//  Copyright © 2017年 hint. All rights reserved.
//

#import "AppDelegate.h"
#import "DKInstaller.h"
#import "DKInjectorProxy.h"

#include <syslog.h>
@interface AppDelegate ()

@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    NSError *error;
    
    // Install helper tools
    if ([DKInstaller isInstalled] == NO && [DKInstaller install:&error] == NO) {
        assert(error != nil);
        
        NSLog(@"Couldn't install MachInjectSample (domain: %@ code: %@)", error.domain, [NSNumber numberWithInteger:error.code]);
        NSAlert *alert = [NSAlert alertWithError:error];
        [alert runModal];
        [NSApp terminate:self];
    }
    
    // Inject Finder process
    if ([DKInjectorProxy inject:&error] == FALSE) {
        assert(error != nil);
        
        NSLog(@"Couldn't inject Finder (domain: %@ code: %@)", error.domain, [NSNumber numberWithInteger:error.code]);
        NSAlert *alert = [NSAlert alertWithError:error];
        [alert runModal];
        [NSApp terminate:self];
    }
    // Insert code here to initialize your application
}


- (void)applicationWillTerminate:(NSNotification *)aNotification {
    // Insert code here to tear down your application
}


@end
