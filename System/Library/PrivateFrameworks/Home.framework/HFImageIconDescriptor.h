/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFIconDescriptor.h>

@class NSString;

@interface HFImageIconDescriptor : NSObject <HFIconDescriptor> {

	BOOL _isDemoModeDescriptor;
	NSString* _imageIdentifier;

}

@property (assign,nonatomic) BOOL isDemoModeDescriptor;                 //@synthesize isDemoModeDescriptor=_isDemoModeDescriptor - In the implementation block
@property (nonatomic,readonly) NSString * imageIdentifier;              //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
-(id)initWithImageIdentifier:(id)arg1 ;
-(id)initWithDemoModeImageIdentifier:(id)arg1 ;
-(id)iconDescriptorByMergingWithIconDescriptor:(id)arg1 ;
-(BOOL)isDemoModeDescriptor;
-(void)setIsDemoModeDescriptor:(BOOL)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)imageIdentifier;
@end

