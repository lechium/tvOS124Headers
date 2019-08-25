/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MDM/MCSSRequestDelegate.h>
#import <libobjc.A.dylib/SSItemLookupRequestDelegate.h>

@class NSArray, SSItemLookupRequest, NSString;

@interface MCSSItemLookupRequestDelegate : MCSSRequestDelegate <SSItemLookupRequestDelegate> {

	NSArray* _items;

}

@property (nonatomic,retain,readonly) SSItemLookupRequest * request; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instance;
-(void)itemLookupRequest:(id)arg1 didFindItems:(id)arg2 ;
-(void)startCompletionBlock:(/*^block*/id)arg1 ;
@end

