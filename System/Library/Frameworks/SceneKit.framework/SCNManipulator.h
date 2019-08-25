/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNAuthoringEnvironment, NSOrderedSet, SCNNode, NSMutableIndexSet, SCNBillboardConstraint;

@interface SCNManipulator : NSObject {

	SCNAuthoringEnvironment* _authoringEnvironment;
	NSOrderedSet* _targets;
	SCNNode* _node;
	C3DMatrix4x4 _xAxisToZAxisTransform;
	C3DMatrix4x4 _yAxisToZAxisTransform;
	C3DMatrix4x4 _xyPlaneToYZPlaneTransform;
	C3DMatrix4x4 _xyPlaneToXZPlaneTransform;
	unsigned short _selectedAxis;
	SCD_Union_SC18 _actionData;
	BOOL _isMouseDown;
	BOOL _readonly;
	unsigned short _action;
	CGPoint _originalMouseLocation;
	SCD_Struct_SC20* _originalData;
	unsigned _originalDataCount;
	C3DMatrix4x4 _worldInitialMatrix;
	C3DMatrix4x4 _worldMatrix;
	long long _snapToAlignCount;
	SCD_Struct_SC21* _snapToAlignOnX;
	SCD_Struct_SC21* _snapToAlignOnY;
	SCD_Struct_SC21* _snapToAlignOnZ;
	NSMutableIndexSet* _snapXIndexes;
	NSMutableIndexSet* _snapYIndexes;
	NSMutableIndexSet* _snapZIndexes;
	long long _xAlignment;
	long long _yAlignment;
	long long _zAlignment;
	SCNNode* _planarTranslationHandleXY;
	SCNNode* _planarTranslationHandleYZ;
	SCNNode* _planarTranslationHandleXZ;
	SCNNode* _planarTranslationHandles;
	SCNNode* _axis;
	SCNNode* _arcHandleXY;
	SCNNode* _arcHandleYZ;
	SCNNode* _arcHandleXZ;
	SCNNode* _arcHandles;
	SCNNode* _scaleNode;
	SCNNode* _screenSpaceRotation;
	SCNNode* _highlightNode;
	 _planarTranslationLayout;
	BOOL _layoutLocked;
	SCNNode* _zArrow;
	SCNNode* _rotationHandles;
	SCNNode* _occluder;
	SCNNode* _translateHandles;
	SCNBillboardConstraint* _billboard;
	NSOrderedSet* _cloneSet;
	BOOL _cloning;
	unsigned long long _features;

}

@property (readonly) SCNAuthoringEnvironment * authoringEnvironment; 
@property (readonly) SCNMatrix4 transform; 
@property (readonly) SCNNode * manipulatorNode; 
@property (nonatomic,retain) NSOrderedSet * targets; 
@property (nonatomic,retain) SCNNode * target; 
@property (assign,nonatomic) long long xAlignment;                                //@synthesize xAlignment=_xAlignment - In the implementation block
@property (assign,nonatomic) long long yAlignment;                                //@synthesize yAlignment=_yAlignment - In the implementation block
@property (assign,nonatomic) long long zAlignment;                                //@synthesize zAlignment=_zAlignment - In the implementation block
@property (assign,nonatomic) BOOL readonly;                                       //@synthesize readonly=_readonly - In the implementation block
@property (assign,nonatomic) unsigned long long features; 
-(unsigned long long)features;
-(void)setFeatures:(unsigned long long)arg1 ;
-(void)setTargets:(NSOrderedSet *)arg1 ;
-(SCNAuthoringEnvironment *)authoringEnvironment;
-(void)updateManipulatorNode;
-(void)_deleteOriginalData;
-(void)setupNode;
-(void)updateManipulatorComponents;
-(long long)effectiveEditingSpace;
-(SCNNode *)manipulatorNode;
-(void)unhighlightSelectedNode;
-(void)_updateActionWithEvent:(SCD_Struct_SC22)arg1 ;
-(1)_snapPositionToAlign:(SCNVector3)arg1 original:(double)arg2 unit:(BOOL)arg3 axisMove:(BOOL*)arg4 rayStart:(long long*)arg5 ;
-(void)updateItemsPosition;
-(void)updateItemsRotation:;
-(void)updateItemsScale:(float)arg1 ;
-(void)_updateCloneStateWithEvent:(SCD_Struct_SC22)arg1 ;
-(BOOL)_applyWithEvent:(SCD_Struct_SC22)arg1 ;
-(BOOL)readonly;
-(void)_saveOriginalData;
-(void)clearSnapIndexes;
-(void)validateClones;
-(BOOL)mouseMoved:(SCD_Struct_SC22)arg1 ;
-(NSOrderedSet *)targets;
-(void)_prepareSnapToAlignData:(unsigned short)arg1 ;
-(void)prepareSnapToAlignData;
-(void)prepareSnapToAlignDataIfNeeded;
-(void)_setAuthoringEnvironment:(id)arg1 ;
-(void)updateManipulatorPosition:(C3DEngineContextRef)arg1 ;
-(void)editingSpaceChanged;
-(void)setReadonly:(BOOL)arg1 ;
-(void)lockLayout;
-(void)unlockLayout;
-(BOOL)mouseDragged:(SCD_Struct_SC22)arg1 ;
-(void)removeClonesFromScene;
-(void)addClonesToScene;
-(id)setupClones;
-(id)snapGuideIndexesOnAxis:(unsigned long long)arg1 ;
-(const SCD_Struct_SC21*)snapInfoAtIndex:(unsigned long long)arg1 axis:(unsigned long long)arg2 ;
-(long long)xAlignment;
-(void)setXAlignment:(long long)arg1 ;
-(long long)yAlignment;
-(void)setYAlignment:(long long)arg1 ;
-(long long)zAlignment;
-(void)setZAlignment:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setTarget:(SCNNode *)arg1 ;
-(id)copy;
-(SCNNode *)target;
-(SCNMatrix4)transform;
-(id)scene;
-(BOOL)isDragging;
-(BOOL)mouseUp:(SCD_Struct_SC22)arg1 ;
-(id)hitTest:(SCD_Struct_SC22)arg1 ;
-(BOOL)mouseDown:(SCD_Struct_SC22)arg1 ;
@end

