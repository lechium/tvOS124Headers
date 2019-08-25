/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/system/libdispatch.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libdispatch.dylib/OS_dispatch_object.h>
#import <libobjc.A.dylib/OS_dispatch_object.h>
#import <libobjc.A.dylib/OS_dispatch_source_nw_channel.h>
#import <libobjc.A.dylib/OS_dispatch_source_sock.h>
#import <libobjc.A.dylib/OS_dispatch_source_memorystatus.h>
#import <libobjc.A.dylib/OS_dispatch_source_vm.h>
#import <libobjc.A.dylib/OS_dispatch_source_vfs.h>
#import <libobjc.A.dylib/OS_dispatch_source_interval.h>
#import <libobjc.A.dylib/OS_dispatch_source_write.h>
#import <libobjc.A.dylib/OS_dispatch_source_vnode.h>
#import <libobjc.A.dylib/OS_dispatch_source_timer.h>
#import <libobjc.A.dylib/OS_dispatch_source_signal.h>
#import <libobjc.A.dylib/OS_dispatch_source_read.h>
#import <libobjc.A.dylib/OS_dispatch_source_proc.h>
#import <libobjc.A.dylib/OS_dispatch_source_memorypressure.h>
#import <libobjc.A.dylib/OS_dispatch_source_mach_recv.h>
#import <libobjc.A.dylib/OS_dispatch_source_mach_send.h>
#import <libobjc.A.dylib/OS_dispatch_source_data_replace.h>
#import <libobjc.A.dylib/OS_dispatch_source_data_or.h>
#import <libobjc.A.dylib/OS_dispatch_source_data_add.h>
#import <libobjc.A.dylib/OS_dispatch_source.h>

@protocol OS_dispatch_source <NSObject>
@end


@class NSString;

@interface OS_dispatch_source : OS_dispatch_object <OS_dispatch_object, OS_dispatch_source_nw_channel, OS_dispatch_source_sock, OS_dispatch_source_memorystatus, OS_dispatch_source_vm, OS_dispatch_source_vfs, OS_dispatch_source_interval, OS_dispatch_source_write, OS_dispatch_source_vnode, OS_dispatch_source_timer, OS_dispatch_source_signal, OS_dispatch_source_read, OS_dispatch_source_proc, OS_dispatch_source_memorypressure, OS_dispatch_source_mach_recv, OS_dispatch_source_mach_send, OS_dispatch_source_data_replace, OS_dispatch_source_data_or, OS_dispatch_source_data_add, OS_dispatch_source>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(void)_xref_dispose;
-(id)init;
@end

