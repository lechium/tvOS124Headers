/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSData;

@interface _NSItemProviderSandboxedResource : NSObject <NSSecureCoding, NSCopying> {

	BOOL _accessingSecurityScopedResource;
	NSURL* _resourceURL;
	NSData* _sandboxExtensionToken;

}

@property (nonatomic,copy) NSData * sandboxExtensionToken;                                                               //@synthesize sandboxExtensionToken=_sandboxExtensionToken - In the implementation block
@property (nonatomic,copy) NSURL * resourceURL;                                                                          //@synthesize resourceURL=_resourceURL - In the implementation block
@property (assign,getter=isAccessingSecurityScopedResource,nonatomic) BOOL accessingSecurityScopedResource;              //@synthesize accessingSecurityScopedResource=_accessingSecurityScopedResource - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithContentsOfURL:(id)arg1 auditToken:(SCD_Struct_NS0)arg2 error:(id*)arg3 ;
-(void)setResourceURL:(NSURL *)arg1 ;
-(void)setSandboxExtensionToken:(NSData *)arg1 ;
-(BOOL)isAccessingSecurityScopedResource;
-(void)setAccessingSecurityScopedResource:(BOOL)arg1 ;
-(NSData *)sandboxExtensionToken;
-(id)resolveURLAndReturnError:(id*)arg1 ;
-(NSURL *)resourceURL;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

