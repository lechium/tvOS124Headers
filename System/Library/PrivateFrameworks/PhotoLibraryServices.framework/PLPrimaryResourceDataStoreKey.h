/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLTaggedPointerDataStoreKey.h>

@class NSString;

@interface PLPrimaryResourceDataStoreKey : NSObject <PLTaggedPointerDataStoreKey>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2 ;
+(unsigned)strategyFromExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)keyData;
-(id)descriptionForAssetID:(id)arg1 ;
-(id)_initWithKeyStruct:(const void*)arg1 ;
-(id)_initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)_init;
-(BOOL)isValid;
@end

