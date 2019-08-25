/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, VUIImageDataManagedObject;

@interface VUIImageInfoManagedObject : NSManagedObject

@property (assign,nonatomic) double canonicalHeight; 
@property (assign,nonatomic) double canonicalWidth; 
@property (assign,nonatomic) long long imageType; 
@property (nonatomic,copy) NSString * urlFormat; 
@property (nonatomic,retain) VUIImageDataManagedObject * imageData; 
+(id)fetchRequest;
@end

