/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_path_observer.h>

@protocol OS_dispatch_queue, OS_nw_dictionary, OS_nw_fd_wrapper;
@class NSObject, NSString;

@interface NWConcrete_nw_path_observer : NSObject <OS_nw_path_observer> {

	NSObject*<OS_dispatch_queue> client_queue;
	/*^block*/id update_block;
	NSObject*<OS_nw_dictionary> known_paths;
	NSObject*<OS_nw_fd_wrapper> fd;
	void* source;
	os_unfair_lock_s lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
@end

