/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>

@class MPMediaPickerController;

@interface MPRemoteMediaPickerController : _UIRemoteViewController {

	MPMediaPickerController* _mediaPickerController;

}

@property (assign,nonatomic,__weak) MPMediaPickerController * mediaPickerController;              //@synthesize mediaPickerController=_mediaPickerController - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
-(void)setMediaPickerController:(MPMediaPickerController *)arg1 ;
-(void)remoteMediaPickerDidPickMediaItems:(id)arg1 ;
-(void)remoteMediaPickerDidCancel;
-(MPMediaPickerController *)mediaPickerController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

