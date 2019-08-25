/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PSIIndexToken : NSObject {

	short _category;
	short _owningCategory;
	NSString* _text;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * text;                    //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) short category;                          //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) short owningCategory;                    //@synthesize owningCategory=_owningCategory - In the implementation block
-(id)initWithText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningCategory:(short)arg4 ;
-(short)owningCategory;
-(void)dealloc;
-(NSString *)identifier;
-(id)description;
-(NSString *)text;
-(short)category;
@end
