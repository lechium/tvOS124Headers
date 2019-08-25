/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/RPSystemBroadcastPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, RPBroadcastPickerStandaloneViewController, UIButton;

@interface RPSystemBroadcastPickerView : UIView <RPSystemBroadcastPickerViewControllerDelegate, NSCoding> {

	BOOL _showsMicrophoneButton;
	NSString* _preferredExtension;
	RPBroadcastPickerStandaloneViewController* _broadcastPickerViewController;
	UIButton* _broadcastPickerButton;

}

@property (nonatomic,retain) RPBroadcastPickerStandaloneViewController * broadcastPickerViewController;              //@synthesize broadcastPickerViewController=_broadcastPickerViewController - In the implementation block
@property (nonatomic,retain) UIButton * broadcastPickerButton;                                                       //@synthesize broadcastPickerButton=_broadcastPickerButton - In the implementation block
@property (nonatomic,retain) NSString * preferredExtension;                                                          //@synthesize preferredExtension=_preferredExtension - In the implementation block
@property (assign,nonatomic) BOOL showsMicrophoneButton;                                                             //@synthesize showsMicrophoneButton=_showsMicrophoneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewControllerDidFinish;
-(void)setBroadcastPickerViewController:(RPBroadcastPickerStandaloneViewController *)arg1 ;
-(void)addBroadcastPickerButton;
-(UIButton *)broadcastPickerButton;
-(void)screenCaptureChanged;
-(RPBroadcastPickerStandaloneViewController *)broadcastPickerViewController;
-(NSString *)preferredExtension;
-(BOOL)showsMicrophoneButton;
-(void)setPreferredExtension:(NSString *)arg1 ;
-(void)setShowsMicrophoneButton:(BOOL)arg1 ;
-(void)setBroadcastPickerButton:(UIButton *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)buttonPressed:(id)arg1 ;
@end

