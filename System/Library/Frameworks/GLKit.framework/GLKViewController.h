/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GLKit/GLKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <GLKit/GLKViewDelegate.h>

@protocol GLKViewControllerDelegate;
@class UIScreen, CADisplayLink, GLKDisplayLinkMessenger, NSString;

@interface GLKViewController : UIViewController <NSCoding, GLKViewDelegate> {

	BOOL _displayLinkPaused;
	BOOL _viewIsVisible;
	BOOL _firstResumeOccurred;
	BOOL _lastResumeOccurred;
	BOOL _lastUpdateOccurred;
	BOOL _lastDrawOccurred;
	BOOL _pauseOnWillResignActive;
	BOOL _resumeOnDidBecomeActive;
	UIScreen* _screen;
	CADisplayLink* _displayLink;
	GLKDisplayLinkMessenger* _displayLinkMessenger;
	double _timeSinceFirstResumeStartTime;
	double _timeSinceLastResumeStartTime;
	double _timeSinceLastUpdatePreviousTime;
	double _timeSinceLastDrawPreviousTime;
	/*function pointer*/void* _updateIMP;
	id<GLKViewControllerDelegate> _delegate;
	long long _screenFramesPerSecond;
	long long _preferredFramesPerSecond;
	long long _framesPerSecond;
	long long _framesDisplayed;
	double _timeSinceFirstResume;
	double _timeSinceLastResume;
	double _timeSinceLastUpdate;
	double _timeSinceLastDraw;

}

@property (nonatomic,retain) UIScreen * screen;                                           //@synthesize screen=_screen - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                 //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) BOOL displayLinkPaused;                                      //@synthesize displayLinkPaused=_displayLinkPaused - In the implementation block
@property (nonatomic,retain) GLKDisplayLinkMessenger * displayLinkMessenger;              //@synthesize displayLinkMessenger=_displayLinkMessenger - In the implementation block
@property (assign,nonatomic) BOOL viewIsVisible;                                          //@synthesize viewIsVisible=_viewIsVisible - In the implementation block
@property (assign,nonatomic) BOOL firstResumeOccurred;                                    //@synthesize firstResumeOccurred=_firstResumeOccurred - In the implementation block
@property (assign,nonatomic) double timeSinceFirstResumeStartTime;                        //@synthesize timeSinceFirstResumeStartTime=_timeSinceFirstResumeStartTime - In the implementation block
@property (assign,nonatomic) BOOL lastResumeOccurred;                                     //@synthesize lastResumeOccurred=_lastResumeOccurred - In the implementation block
@property (assign,nonatomic) double timeSinceLastResumeStartTime;                         //@synthesize timeSinceLastResumeStartTime=_timeSinceLastResumeStartTime - In the implementation block
@property (assign,nonatomic) BOOL lastUpdateOccurred;                                     //@synthesize lastUpdateOccurred=_lastUpdateOccurred - In the implementation block
@property (assign,nonatomic) double timeSinceLastUpdatePreviousTime;                      //@synthesize timeSinceLastUpdatePreviousTime=_timeSinceLastUpdatePreviousTime - In the implementation block
@property (assign,nonatomic) BOOL lastDrawOccurred;                                       //@synthesize lastDrawOccurred=_lastDrawOccurred - In the implementation block
@property (assign,nonatomic) double timeSinceLastDrawPreviousTime;                        //@synthesize timeSinceLastDrawPreviousTime=_timeSinceLastDrawPreviousTime - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* updateIMP;                         //@synthesize updateIMP=_updateIMP - In the implementation block
@property (assign,nonatomic) long long screenFramesPerSecond;                             //@synthesize screenFramesPerSecond=_screenFramesPerSecond - In the implementation block
@property (assign,nonatomic) id<GLKViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long preferredFramesPerSecond;                          //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (nonatomic,readonly) long long framesPerSecond;                                 //@synthesize framesPerSecond=_framesPerSecond - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (nonatomic,readonly) long long framesDisplayed;                                 //@synthesize framesDisplayed=_framesDisplayed - In the implementation block
@property (nonatomic,readonly) double timeSinceFirstResume;                               //@synthesize timeSinceFirstResume=_timeSinceFirstResume - In the implementation block
@property (nonatomic,readonly) double timeSinceLastResume;                                //@synthesize timeSinceLastResume=_timeSinceLastResume - In the implementation block
@property (nonatomic,readonly) double timeSinceLastUpdate;                                //@synthesize timeSinceLastUpdate=_timeSinceLastUpdate - In the implementation block
@property (nonatomic,readonly) double timeSinceLastDraw;                                  //@synthesize timeSinceLastDraw=_timeSinceLastDraw - In the implementation block
@property (assign,nonatomic) BOOL pauseOnWillResignActive;                                //@synthesize pauseOnWillResignActive=_pauseOnWillResignActive - In the implementation block
@property (assign,nonatomic) BOOL resumeOnDidBecomeActive;                                //@synthesize resumeOnDidBecomeActive=_resumeOnDidBecomeActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_initCommon;
-(void)_updateAndDraw;
-(void)_updateScreenIfChanged;
-(long long)_calculateScreenFramesPerSecond:(id)arg1 ;
-(void)setDisplayLinkMessenger:(GLKDisplayLinkMessenger *)arg1 ;
-(void)_configureNotifications;
-(void)_pauseByNotification;
-(void)_resumeByNotification;
-(void)_createDisplayLinkForScreen:(id)arg1 ;
-(double)timeSinceFirstResume;
-(double)timeSinceLastResume;
-(void)setPauseOnWillResignActive:(BOOL)arg1 ;
-(BOOL)pauseOnWillResignActive;
-(void)setResumeOnDidBecomeActive:(BOOL)arg1 ;
-(BOOL)resumeOnDidBecomeActive;
-(BOOL)displayLinkPaused;
-(void)setDisplayLinkPaused:(BOOL)arg1 ;
-(GLKDisplayLinkMessenger *)displayLinkMessenger;
-(BOOL)viewIsVisible;
-(void)setViewIsVisible:(BOOL)arg1 ;
-(BOOL)firstResumeOccurred;
-(void)setFirstResumeOccurred:(BOOL)arg1 ;
-(double)timeSinceFirstResumeStartTime;
-(void)setTimeSinceFirstResumeStartTime:(double)arg1 ;
-(BOOL)lastResumeOccurred;
-(void)setLastResumeOccurred:(BOOL)arg1 ;
-(double)timeSinceLastResumeStartTime;
-(void)setTimeSinceLastResumeStartTime:(double)arg1 ;
-(BOOL)lastUpdateOccurred;
-(void)setLastUpdateOccurred:(BOOL)arg1 ;
-(double)timeSinceLastUpdatePreviousTime;
-(void)setTimeSinceLastUpdatePreviousTime:(double)arg1 ;
-(BOOL)lastDrawOccurred;
-(void)setLastDrawOccurred:(BOOL)arg1 ;
-(double)timeSinceLastDrawPreviousTime;
-(void)setTimeSinceLastDrawPreviousTime:(double)arg1 ;
-(/*function pointer*/void*)updateIMP;
-(void)setUpdateIMP:(/*function pointer*/void*)arg1 ;
-(long long)screenFramesPerSecond;
-(void)setScreenFramesPerSecond:(long long)arg1 ;
-(long long)framesDisplayed;
-(double)timeSinceLastUpdate;
-(double)timeSinceLastDraw;
-(long long)framesPerSecond;
-(long long)preferredFramesPerSecond;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIScreen *)screen;
-(void)setDelegate:(id<GLKViewControllerDelegate>)arg1 ;
-(id<GLKViewControllerDelegate>)delegate;
-(void)setScreen:(UIScreen *)arg1 ;
-(void)setView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)viewDidUnload;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(BOOL)isPaused;
@end

