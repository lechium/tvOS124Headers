/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItem;

@interface CoreDAVBulkRequestsSupportedItem : CoreDAVItem {

	CoreDAVItem* _supported;

}

@property (nonatomic,retain) CoreDAVItem * supported;              //@synthesize supported=_supported - In the implementation block
+(id)copyParseRules;
-(void)setSupported:(CoreDAVItem *)arg1 ;
-(CoreDAVItem *)supported;
-(id)init;
-(id)description;
@end

