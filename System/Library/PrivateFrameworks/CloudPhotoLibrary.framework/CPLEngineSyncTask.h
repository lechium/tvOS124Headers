/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLEngineSyncTaskDelegate, NSCoding;
@class CPLEngineLibrary, NSString;

@interface CPLEngineSyncTask : NSObject {

	BOOL _foreground;
	BOOL _forceSync;
	BOOL _cancelled;
	id<CPLEngineSyncTaskDelegate> _delegate;
	CPLEngineLibrary* _engineLibrary;
	id<NSCoding> _transportUserIdentifier;

}

@property (setter=_setCancelled:,getter=isCancelled) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (retain) id<CPLEngineSyncTaskDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CPLEngineLibrary * engineLibrary;                  //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (nonatomic,retain) id<NSCoding> transportUserIdentifier;                //@synthesize transportUserIdentifier=_transportUserIdentifier - In the implementation block
@property (assign,nonatomic) BOOL foreground;                                     //@synthesize foreground=_foreground - In the implementation block
@property (assign,nonatomic) BOOL forceSync;                                      //@synthesize forceSync=_forceSync - In the implementation block
@property (nonatomic,readonly) NSString * taskIdentifier; 
+(id)taskWithEngineLibrary:(id)arg1 ;
-(void)launch;
-(NSString *)taskIdentifier;
-(void)setForceSync:(BOOL)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(void)taskDidFinishWithError:(id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(unsigned long long)diskPressureState;
-(void)taskDidProgress:(float)arg1 userInfo:(id)arg2 ;
-(id<NSCoding>)transportUserIdentifier;
-(void)setTransportUserIdentifier:(id<NSCoding>)arg1 ;
-(BOOL)forceSync;
-(void)_setCancelled:(BOOL)arg1 ;
-(id)description;
-(void)setDelegate:(id<CPLEngineSyncTaskDelegate>)arg1 ;
-(id<CPLEngineSyncTaskDelegate>)delegate;
-(void)cancel;
-(BOOL)isCancelled;
-(BOOL)foreground;
-(void)setForeground:(BOOL)arg1 ;
@end

