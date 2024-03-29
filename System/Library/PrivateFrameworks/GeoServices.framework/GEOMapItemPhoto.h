/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol GEOMapItemPhoto <NSObject>
@property (nonatomic,readonly) NSString * author; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * licenseDescription; 
@property (nonatomic,readonly) NSURL * licenseURL; 
@property (nonatomic,readonly) BOOL displayFullPhotoInline; 
@property (nonatomic,readonly) BOOL useGallery; 
@property (nonatomic,readonly) NSString * uid; 
@property (nonatomic,readonly) double sizeRatio; 
@required
-(id)bestPhotoForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2;
-(NSString *)author;
-(NSString *)caption;
-(NSString *)licenseDescription;
-(BOOL)displayFullPhotoInline;
-(BOOL)useGallery;
-(id)largestPhoto;
-(NSURL *)licenseURL;
-(double)sizeRatio;
-(NSString *)uid;

@end

