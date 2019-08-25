/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRResponseMessage.h>

@class NSSet;

@interface TRSetupConfigurationResponse : TRResponseMessage {

	BOOL _needsNetwork;
	NSSet* _unauthenticatedAccountServices;

}

@property (assign,nonatomic) BOOL needsNetwork;                                 //@synthesize needsNetwork=_needsNetwork - In the implementation block
@property (nonatomic,copy) NSSet * unauthenticatedAccountServices;              //@synthesize unauthenticatedAccountServices=_unauthenticatedAccountServices - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUnauthenticatedAccountServices:(NSSet *)arg1 ;
-(void)setNeedsNetwork:(BOOL)arg1 ;
-(NSSet *)unauthenticatedAccountServices;
-(id)_stringFromAccountServices:(id)arg1 ;
-(BOOL)needsNetwork;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
