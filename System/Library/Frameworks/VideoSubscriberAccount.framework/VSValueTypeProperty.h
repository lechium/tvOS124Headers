/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet;

@interface VSValueTypeProperty : NSObject {

	NSString* _name;
	unsigned long long _kind;
	NSSet* _allowedClasses;
	id _initialValue;

}

@property (nonatomic,copy) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long kind;              //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSSet * allowedClasses;                 //@synthesize allowedClasses=_allowedClasses - In the implementation block
@property (nonatomic,retain) id initialValue;                      //@synthesize initialValue=_initialValue - In the implementation block
+(id)valueTypePropertyWithName:(id)arg1 kind:(unsigned long long)arg2 allowedClasses:(id)arg3 initialValue:(id)arg4 ;
-(void)setAllowedClasses:(NSSet *)arg1 ;
-(void)setKind:(unsigned long long)arg1 ;
-(void)setInitialValue:(id)arg1 ;
-(id)initialValue;
-(NSSet *)allowedClasses;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)kind;
@end

