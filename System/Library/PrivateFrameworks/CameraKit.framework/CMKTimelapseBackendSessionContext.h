/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CMKTimelapseState, NSArray;

@interface CMKTimelapseBackendSessionContext : NSObject {

	NSString* _timelapseUUID;
	CMKTimelapseState* _state;
	NSArray* _filesToDelete;
	NSArray* _filesToWrite;

}

@property (nonatomic,readonly) NSString * timelapseUUID;              //@synthesize timelapseUUID=_timelapseUUID - In the implementation block
@property (nonatomic,retain) CMKTimelapseState * state;               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSArray * filesToDelete;                 //@synthesize filesToDelete=_filesToDelete - In the implementation block
@property (nonatomic,retain) NSArray * filesToWrite;                  //@synthesize filesToWrite=_filesToWrite - In the implementation block
-(id)initWithTimelapseUUID:(id)arg1 ;
-(NSString *)timelapseUUID;
-(NSArray *)filesToDelete;
-(void)setFilesToDelete:(NSArray *)arg1 ;
-(NSArray *)filesToWrite;
-(void)setFilesToWrite:(NSArray *)arg1 ;
-(id)init;
-(id)description;
-(CMKTimelapseState *)state;
-(void)setState:(CMKTimelapseState *)arg1 ;
@end

