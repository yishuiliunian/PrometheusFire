#include <syslog.h>
#import <objc/runtime.h>
#import <Cocoa/Cocoa.h>
#import "FSLogger.h"
__attribute__((constructor))
void load()
{
    [FSLogger sharedLogger].logLevel = FSLogLevelDebug;
    syslog(LOG_ERR, "MachInjectSample PAYLOAD: My pid is %d\n", getpid());
    FSLogDebug(@"xxx");
}
