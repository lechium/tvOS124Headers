/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SAML/SAML-Structs.h>
@class NSString;

@interface XMLWrapperNamespace : NSObject {

	xmlNs* _xmlNs;
	NSString* _href;
	NSString* _prefix;

}

@property (nonatomic,retain) NSString * href;                //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) NSString * prefix;              //@synthesize prefix=_prefix - In the implementation block
-(id)initWithNsNode:(xmlNs*)arg1 error:(id*)arg2 ;
-(xmlNs*)xmlNsForNode:(xmlNode*)arg1 error:(id*)arg2 ;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(NSString *)href;
-(void)setHref:(NSString *)arg1 ;
@end

