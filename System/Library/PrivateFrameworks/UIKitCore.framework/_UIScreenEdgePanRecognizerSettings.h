/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UISettings.h>

@class NSString, _UIScreenEdgePanRecognizerEdgeSettings, _UIScreenEdgePanRecognizerDwellSettings, _UIScreenEdgePanRecognizerCornerSettings;

@interface _UIScreenEdgePanRecognizerSettings : _UISettings {

	BOOL _analysisLoggingEnabled;
	BOOL _analysisFailureOverlayVisible;
	BOOL _analysisLoggingOverlayVisible;
	NSString* _multitaskingGestureMode;
	NSString* _navigationGestureMode;
	_UIScreenEdgePanRecognizerEdgeSettings* _edgeSettings;
	_UIScreenEdgePanRecognizerDwellSettings* _dwellSettings;
	_UIScreenEdgePanRecognizerCornerSettings* _cornerSettings;

}

@property (nonatomic,copy) NSString * multitaskingGestureMode;                                       //@synthesize multitaskingGestureMode=_multitaskingGestureMode - In the implementation block
@property (nonatomic,copy) NSString * navigationGestureMode;                                         //@synthesize navigationGestureMode=_navigationGestureMode - In the implementation block
@property (nonatomic,retain) _UIScreenEdgePanRecognizerEdgeSettings * edgeSettings;                  //@synthesize edgeSettings=_edgeSettings - In the implementation block
@property (nonatomic,retain) _UIScreenEdgePanRecognizerDwellSettings * dwellSettings;                //@synthesize dwellSettings=_dwellSettings - In the implementation block
@property (nonatomic,retain) _UIScreenEdgePanRecognizerCornerSettings * cornerSettings;              //@synthesize cornerSettings=_cornerSettings - In the implementation block
@property (assign,nonatomic) BOOL analysisLoggingEnabled;                                            //@synthesize analysisLoggingEnabled=_analysisLoggingEnabled - In the implementation block
@property (assign,nonatomic) BOOL analysisFailureOverlayVisible;                                     //@synthesize analysisFailureOverlayVisible=_analysisFailureOverlayVisible - In the implementation block
@property (assign,nonatomic) BOOL analysisLoggingOverlayVisible;                                     //@synthesize analysisLoggingOverlayVisible=_analysisLoggingOverlayVisible - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(_UIScreenEdgePanRecognizerEdgeSettings *)edgeSettings;
-(void)setAnalysisLoggingEnabled:(BOOL)arg1 ;
-(void)setAnalysisFailureOverlayVisible:(BOOL)arg1 ;
-(void)setAnalysisLoggingOverlayVisible:(BOOL)arg1 ;
-(void)setMultitaskingGestureModePost351:(id)arg1 ;
-(id)multitaskingGestureModePost351;
-(void)setNavigationGestureModePost351:(id)arg1 ;
-(id)navigationGestureModePost351;
-(NSString *)multitaskingGestureMode;
-(void)setMultitaskingGestureMode:(NSString *)arg1 ;
-(NSString *)navigationGestureMode;
-(void)setNavigationGestureMode:(NSString *)arg1 ;
-(void)setEdgeSettings:(_UIScreenEdgePanRecognizerEdgeSettings *)arg1 ;
-(_UIScreenEdgePanRecognizerDwellSettings *)dwellSettings;
-(void)setDwellSettings:(_UIScreenEdgePanRecognizerDwellSettings *)arg1 ;
-(_UIScreenEdgePanRecognizerCornerSettings *)cornerSettings;
-(void)setCornerSettings:(_UIScreenEdgePanRecognizerCornerSettings *)arg1 ;
-(BOOL)analysisLoggingEnabled;
-(BOOL)analysisFailureOverlayVisible;
-(BOOL)analysisLoggingOverlayVisible;
@end

