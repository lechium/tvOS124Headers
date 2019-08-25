/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLAssetResolver.h>

@class NSString;

@interface MDLPathAssetResolver : NSObject <MDLAssetResolver> {

	NSString* _path;

}

@property (nonatomic,copy) NSString * path; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)resolveAssetNamed:(id)arg1 ;
-(BOOL)canResolveAssetNamed:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
@end

