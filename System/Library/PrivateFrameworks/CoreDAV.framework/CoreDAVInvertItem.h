/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVPrincipalItem;

@interface CoreDAVInvertItem : CoreDAVItem {

	CoreDAVPrincipalItem* _principal;

}

@property (nonatomic,retain) CoreDAVPrincipalItem * principal;              //@synthesize principal=_principal - In the implementation block
+(id)copyParseRules;
-(void)write:(id)arg1 ;
-(void)setPrincipal:(CoreDAVPrincipalItem *)arg1 ;
-(CoreDAVPrincipalItem *)principal;
-(id)init;
-(id)description;
@end
