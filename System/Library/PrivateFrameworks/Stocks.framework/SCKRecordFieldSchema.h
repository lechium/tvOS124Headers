/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCKRecordFieldSchema : NSObject {

	BOOL _encrypted;
	BOOL _required;
	NSString* _name;
	Class _valueClass;

}

@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) Class valueClass;                                 //@synthesize valueClass=_valueClass - In the implementation block
@property (assign,getter=isRequired,nonatomic) BOOL required;                  //@synthesize required=_required - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted;              //@synthesize encrypted=_encrypted - In the implementation block
-(void)setRequired:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 valueClass:(Class)arg2 required:(BOOL)arg3 encrypted:(BOOL)arg4 ;
-(BOOL)isValidRecord:(id)arg1 ;
-(Class)valueClass;
-(void)setValueClass:(Class)arg1 ;
-(BOOL)isRequired;
-(BOOL)isEncrypted;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
@end

