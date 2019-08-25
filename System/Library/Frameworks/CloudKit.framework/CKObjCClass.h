/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray;

@interface CKObjCClass : NSObject {

	Class _handle;
	NSString* _name;
	NSDictionary* _propertiesByName;
	NSArray* _sortedProperties;

}

@property (nonatomic,readonly) NSDictionary * propertiesByName;              //@synthesize propertiesByName=_propertiesByName - In the implementation block
@property (nonatomic,readonly) NSArray * sortedProperties;                   //@synthesize sortedProperties=_sortedProperties - In the implementation block
@property (nonatomic,readonly) Class handle;                                 //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
+(id)classForHandle:(Class)arg1 ;
+(id)classForObject:(id)arg1 ;
-(Class)handle;
-(id)propertyForName:(id)arg1 ;
-(NSArray *)sortedProperties;
-(NSDictionary *)propertiesByName;
-(id)allProperties;
-(id)initWithHandle:(Class)arg1 ;
-(NSString *)name;
@end
