/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface TLToneStoreDownload : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	NSString* _name;
	NSString* _albumTitle;
	NSString* _artistName;
	double _duration;
	NSString* _genreName;
	BOOL _isRingtone;
	unsigned long long _storeItemIdentifier;
	float _downloadProgress;
	NSString* _toneIdentifier;
	NSString* _identifier;

}

@property (setter=_setName:,nonatomic,copy) NSString * name; 
@property (setter=_setAlbumTitle:,nonatomic,copy) NSString * albumTitle; 
@property (setter=_setArtistName:,nonatomic,copy) NSString * artistName; 
@property (assign,setter=_setDuration:,nonatomic) double duration; 
@property (setter=_setGenreName:,nonatomic,copy) NSString * genreName; 
@property (assign,setter=_setRingtone:,getter=isRingtone,nonatomic) BOOL ringtone; 
@property (assign,setter=_setStoreItemIdentifier:,nonatomic) unsigned long long storeItemIdentifier; 
@property (assign,setter=_setDownloadProgress:,nonatomic) float downloadProgress; 
@property (setter=_setToneIdentifier:,nonatomic,copy) NSString * toneIdentifier; 
@property (nonatomic,readonly) NSString * identifier;                                                             //@synthesize identifier=_identifier - In the implementation block
-(void)_setName:(id)arg1 ;
-(void)_setArtistName:(id)arg1 ;
-(void)_setStoreItemIdentifier:(unsigned long long)arg1 ;
-(BOOL)isRingtone;
-(void)_setDownloadProgress:(float)arg1 ;
-(void)_setAlbumTitle:(id)arg1 ;
-(void)_setGenreName:(id)arg1 ;
-(void)_setRingtone:(BOOL)arg1 ;
-(void)_setToneIdentifier:(id)arg1 ;
-(float)downloadProgress;
-(NSString *)artistName;
-(unsigned long long)storeItemIdentifier;
-(NSString *)genreName;
-(NSString *)albumTitle;
-(NSString *)toneIdentifier;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(void)_setDuration:(double)arg1 ;
@end
