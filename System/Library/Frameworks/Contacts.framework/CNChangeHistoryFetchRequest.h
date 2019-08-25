/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNChangeHistoryFetchRequest : NSObject <NSSecureCoding> {

	BOOL _unifyResults;
	BOOL _includeGroupChanges;
	BOOL _includeChangeAnchors;
	NSString* _clientIdentifier;

}

@property (assign,nonatomic) BOOL includeChangeAnchors;                  //@synthesize includeChangeAnchors=_includeChangeAnchors - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) BOOL unifyResults;                          //@synthesize unifyResults=_unifyResults - In the implementation block
@property (assign,nonatomic) BOOL includeGroupChanges;                   //@synthesize includeGroupChanges=_includeGroupChanges - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)clientIdentifier;
-(BOOL)unifyResults;
-(BOOL)includeGroupChanges;
-(BOOL)includeChangeAnchors;
-(void)setIncludeGroupChanges:(BOOL)arg1 ;
-(void)setIncludeChangeAnchors:(BOOL)arg1 ;
-(void)setUnifyResults:(BOOL)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

