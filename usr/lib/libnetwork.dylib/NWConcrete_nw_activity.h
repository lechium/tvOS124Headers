/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_activity.h>

@class NSString;

@interface NWConcrete_nw_activity : NSObject <OS_nw_activity> {

	unsigned char token[16];
	unsigned long long investigation_identifier;
	unsigned long long start_time;
	unsigned long long end_time;
	NWConcrete_nw_activity* parent;
	os_unfair_lock_s lock;
	unsigned label;
	unsigned domain;
	int reporting_strategy;
	int completion_reason;
	unsigned is_retry : 1;
	unsigned is_lightweight : 1;
	unsigned activated : 1;
	unsigned completed : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDomain:(unsigned)arg1 label:(unsigned)arg2 ;
-(id)initWithOriginal:(id)arg1 ;
-(id)initWithToken:(unsigned char)arg1 ;
-(void)dealloc;
-(NSString *)description;
@end

