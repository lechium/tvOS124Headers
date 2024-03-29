/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CNContactChangeRequest : NSObject <NSSecureCoding> {

	NSArray* _contacts;
	long long _kind;
	NSString* _linkIdentifier;

}

@property (nonatomic,copy,readonly) NSArray * contacts;                        //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contactIdentifiers; 
@property (nonatomic,readonly) long long kind;                                 //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) NSString * linkIdentifier;                 //@synthesize linkIdentifier=_linkIdentifier - In the implementation block
+(id)contactChangeRequestWithKind:(long long)arg1 contacts:(id)arg2 linkIdentifier:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(NSString *)linkIdentifier;
-(id)initWithKind:(long long)arg1 contacts:(id)arg2 linkIdentifier:(id)arg3 ;
-(NSArray *)contacts;
-(NSArray *)contactIdentifiers;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)kind;
@end

