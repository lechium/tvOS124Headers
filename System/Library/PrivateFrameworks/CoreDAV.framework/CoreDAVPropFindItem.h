/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CoreDAVItem;

@interface CoreDAVPropFindItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _propName;
	CoreDAVItemWithNoChildren* _allProp;
	CoreDAVItem* _include;
	CoreDAVItem* _prop;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * propName;              //@synthesize propName=_propName - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * allProp;               //@synthesize allProp=_allProp - In the implementation block
@property (nonatomic,retain) CoreDAVItem * include;                             //@synthesize include=_include - In the implementation block
@property (nonatomic,retain) CoreDAVItem * prop;                                //@synthesize prop=_prop - In the implementation block
+(id)copyParseRules;
-(CoreDAVItemWithNoChildren *)propName;
-(CoreDAVItemWithNoChildren *)allProp;
-(CoreDAVItem *)include;
-(void)setPropName:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setAllProp:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setInclude:(CoreDAVItem *)arg1 ;
-(CoreDAVItem *)prop;
-(void)setProp:(CoreDAVItem *)arg1 ;
-(id)init;
-(id)description;
@end
