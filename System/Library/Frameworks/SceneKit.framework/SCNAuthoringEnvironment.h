/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCNSceneRenderer;
#import <SceneKit/SceneKit-Structs.h>
@class NSSet, NSMutableOrderedSet, NSArray, NSMutableArray, SCNAuthoringEnvironment2, SCNManipulator, SCNNode;

@interface SCNAuthoringEnvironment : NSObject {

	C3DEngineContextRef _engineContext;
	id<SCNSceneRenderer> _sceneRenderer;
	BOOL _sceneRendererIsSCNView;
	_C3DFXProgram* _noColorProgram;
	_C3DFXProgram* _colorOnlyProgram;
	_C3DFXProgram* _colorAndTextureProgram;
	_C3DFXProgram* _lightProbesProgram;
	_C3DFXProgram* _wireframeProgram;
	SCD_Struct_SC152* _logsInfo;
	SCD_Struct_SC152* _boldLogsInfo;
	SCD_Struct_SC152* _dynamicLinesInfo;
	SCD_Struct_SC152* _dynamicLinesNoDepthTestInfo;
	SCD_Struct_SC152* _dynamicTrianglesInfo;
	SCD_Struct_SC152* _overlayDynamicLinesInfo;
	SCD_Struct_SC152* _overlayDynamicTriangleInfo;
	SCD_Struct_SC152* _textInfo;
	SCD_Struct_SC152* _lightProbesInfo;
	SCD_Struct_SC154* _normalTextInfo;
	SCD_Struct_SC154* _boldTextInfo;
	C3DRasterizerStatesRef _depthOnCullOnStates;
	C3DRasterizerStatesRef _depthOffCullOnStates;
	C3DRasterizerStatesRef _depthOnCullOffStates;
	C3DRasterizerStatesRef _depthOffCullOffStates;
	const void* _arrowIndicesOffset;
	unsigned short _arrowIndicesCount;
	const void* _quadrantIndicesOffset;
	unsigned short _quadrantIndicesCount;
	const void* _quadrantRingIndicesOffset;
	unsigned short _quadrantRingIndicesCount;
	double _timedRecordingExpirationTime;
	unsigned char _timedRecordingBuffer[64000];
	unsigned _timedRecordingBufferStart;
	unsigned _timedRecordingBufferEnd;
	long long _authoringDisplayMask;
	unsigned _hasLighting : 1;
	BOOL _shouldSnapOnGrid;
	BOOL _shouldSnapToAlign;
	BOOL _selectionIsReadonly;
	long long _editingSpace;
	BOOL _graphicalSelectionEnabled;
	 _selectionP0;
	 _selectionP1;
	BOOL _selecting;
	BOOL _surroundToSelect;
	NSSet* _initialSelection;
	NSMutableOrderedSet* _selection;
	NSArray* _selectedNodes;
	BOOL _isOrbiting;
	float _lastGridDistance;
	double _gridUnit;
	NSMutableArray* _visibleManipulableItems;
	void* _wireframeRenderer;
	unsigned _consoleLineCount;
	SCD_Struct_SC156* _statisticsInfo;
	float _drawScale;
	id _delegate;
	SCNAuthoringEnvironment2* _authEnv2;

}

@property (readonly) id<SCNSceneRenderer> sceneRenderer; 
@property (nonatomic,readonly) NSArray * selectedNodes; 
@property (assign,nonatomic) BOOL selectionIsReadonly; 
@property (nonatomic,readonly) SCNManipulator * manipulator; 
@property (nonatomic,readonly) SCNNode * authoringOverlayLayer; 
@property (assign,nonatomic) BOOL shouldSnapOnGrid;                                            //@synthesize shouldSnapOnGrid=_shouldSnapOnGrid - In the implementation block
@property (assign,nonatomic) BOOL shouldSnapToAlign;                                           //@synthesize shouldSnapToAlign=_shouldSnapToAlign - In the implementation block
@property (assign,nonatomic) BOOL graphicalSelectionEnabled;                                   //@synthesize graphicalSelectionEnabled=_graphicalSelectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL surroundToSelect;                                            //@synthesize surroundToSelect=_surroundToSelect - In the implementation block
@property (assign,nonatomic) long long authoringDisplayMask; 
@property (nonatomic,readonly) double gridUnit;                                                //@synthesize gridUnit=_gridUnit - In the implementation block
@property (assign,nonatomic) long long editingSpace;                                           //@synthesize editingSpace=_editingSpace - In the implementation block
@property (nonatomic,readonly) SCNMatrix4 viewMatrix; 
@property (assign,nonatomic,__weak) id<SCNAuthoringEnvironmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)authoringEnvironmentForSceneRenderer:(id)arg1 createIfNeeded:(BOOL)arg2 ;
+(long long)defaultAuthoringDisplayMask;
+(id)rendererForSceneRenderer:(id)arg1 ;
+(id)authoringEnvironmentForSceneRenderer:(id)arg1 ;
-(id)renderer;
-(long long)editingSpace;
-(SCNNode *)authoringOverlayLayer;
-(double)gridUnit;
-(BOOL)shouldSnapToAlign;
-(BOOL)shouldSnapOnGrid;
-(SCNMatrix4)viewMatrix;
-(id<SCNSceneRenderer>)sceneRenderer;
-(long long)authoringDisplayMask;
-(void)setAuthoringDisplayMask:(long long)arg1 ;
-(SCNManipulator *)manipulator;
-(BOOL)didTapAtPoint:(CGPoint)arg1 ;
-(id)_initWithEngineContext:(C3DEngineContextRef)arg1 ;
-(void)_setupAuthoringEnv2:(id)arg1 ;
-(void)setupAuthoringEnv2;
-(id)authoringEnvironment2;
-(void)sceneDidChange:(id)arg1 ;
-(id)selectedItems;
-(void)beginEditingNodes:(id)arg1 ;
-(NSArray *)selectedNodes;
-(BOOL)selectionIsReadonly;
-(void)setSelectionIsReadonly:(BOOL)arg1 ;
-(void)setEditingSpace:(long long)arg1 ;
-(void)cancelEdition;
-(void)beginEditingNode:(id)arg1 ;
-(void)saveInitialSelection;
-(void)beginOrbiting;
-(void)endOrbiting;
-(void)drawLineFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 color:(id)arg3 ;
-(void)drawString:(id)arg1 atPoint:(CGPoint)arg2 color:(id)arg3 ;
-(BOOL)isEditingSubComponent;
-(void)setShouldSnapOnGrid:(BOOL)arg1 ;
-(void)setShouldSnapToAlign:(BOOL)arg1 ;
-(BOOL)graphicalSelectionEnabled;
-(void)setGraphicalSelectionEnabled:(BOOL)arg1 ;
-(BOOL)surroundToSelect;
-(void)setSurroundToSelect:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)update;
-(void)setDelegate:(id<SCNAuthoringEnvironmentDelegate>)arg1 ;
-(id<SCNAuthoringEnvironmentDelegate>)delegate;
@end

