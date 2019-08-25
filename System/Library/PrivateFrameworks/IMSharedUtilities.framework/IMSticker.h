/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class NSURL, NSString, NSData, NSDictionary;

@interface IMSticker : NSObject {

	NSURL* _fileURL;
	NSString* _stickerGUID;
	NSString* _stickerPackGUID;
	NSString* _accessibilityLabel;
	NSString* _moodCategory;
	NSString* _stickerName;
	NSData* _recipe;
	NSString* _ballonBundleID;
	NSDictionary* _attributionInfo;

}

@property (nonatomic,retain) NSData * recipe;                                //@synthesize recipe=_recipe - In the implementation block
@property (nonatomic,copy) NSString * ballonBundleID;                        //@synthesize ballonBundleID=_ballonBundleID - In the implementation block
@property (nonatomic,copy) NSDictionary * attributionInfo;                   //@synthesize attributionInfo=_attributionInfo - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fileURL;                         //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerGUID;                  //@synthesize stickerGUID=_stickerGUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerPackGUID;              //@synthesize stickerPackGUID=_stickerPackGUID - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;                    //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,copy) NSString * moodCategory;                          //@synthesize moodCategory=_moodCategory - In the implementation block
@property (nonatomic,copy) NSString * stickerName;                           //@synthesize stickerName=_stickerName - In the implementation block
-(NSData *)recipe;
-(NSString *)stickerGUID;
-(NSString *)stickerPackGUID;
-(id)initWithStickerID:(NSString*)arg1 stickerPackID:(NSString*)arg2 fileURL:(id)arg3 accessibilityLabel:(id)arg4 moodCategory:(id)arg5 stickerName:(id)arg6 ;
-(id)initWithStickerPropertyDictionary:(id)arg1 stickerPackID:(NSString*)arg2 stickerPackBundlePath:(id)arg3 ;
-(NSString *)moodCategory;
-(void)setMoodCategory:(NSString *)arg1 ;
-(NSString *)stickerName;
-(void)setStickerName:(NSString *)arg1 ;
-(NSString *)ballonBundleID;
-(void)setBallonBundleID:(NSString *)arg1 ;
-(NSDictionary *)attributionInfo;
-(void)setAttributionInfo:(NSDictionary *)arg1 ;
-(void)setRecipe:(NSData *)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)fileURL;
@end

