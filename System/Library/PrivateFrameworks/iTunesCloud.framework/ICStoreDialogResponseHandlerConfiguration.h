/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICStoreDialogResponseHandlerConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allowsHandlingNonAuthenticationDialogs;
	BOOL _shouldRecordLastAuthenticationDialogResponseTime;

}

@property (assign,nonatomic) BOOL allowsHandlingNonAuthenticationDialogs;                        //@synthesize allowsHandlingNonAuthenticationDialogs=_allowsHandlingNonAuthenticationDialogs - In the implementation block
@property (assign,nonatomic) BOOL shouldRecordLastAuthenticationDialogResponseTime;              //@synthesize shouldRecordLastAuthenticationDialogResponseTime=_shouldRecordLastAuthenticationDialogResponseTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)allowsHandlingNonAuthenticationDialogs;
-(BOOL)shouldRecordLastAuthenticationDialogResponseTime;
-(void)setShouldRecordLastAuthenticationDialogResponseTime:(BOOL)arg1 ;
-(void)setAllowsHandlingNonAuthenticationDialogs:(BOOL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

