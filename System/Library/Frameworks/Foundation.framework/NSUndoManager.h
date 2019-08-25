/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface NSUndoManager : NSObject {

	id _undoStack;
	id _redoStack;
	NSArray* _runLoopModes;
	unsigned long long _NSUndoManagerPrivate1;
	id _target;
	id _proxy;
	void* _NSUndoManagerPrivate2;
	void* _NSUndoManagerPrivate3;

}

@property (readonly) long long groupingLevel; 
@property (getter=isUndoRegistrationEnabled,readonly) BOOL undoRegistrationEnabled; 
@property (assign) BOOL groupsByEvent; 
@property (assign) unsigned long long levelsOfUndo; 
@property (copy) NSArray * runLoopModes; 
@property (readonly) BOOL canUndo; 
@property (readonly) BOOL canRedo; 
@property (getter=isUndoing,readonly) BOOL undoing; 
@property (getter=isRedoing,readonly) BOOL redoing; 
@property (readonly) BOOL undoActionIsDiscardable; 
@property (readonly) BOOL redoActionIsDiscardable; 
@property (copy,readonly) NSString * undoActionName; 
@property (copy,readonly) NSString * redoActionName; 
@property (copy,readonly) NSString * undoMenuItemTitle; 
@property (copy,readonly) NSString * redoMenuItemTitle; 
+(void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(BOOL)arg1 ;
+(void)_endTopLevelGroupings;
-(id)_methodSignatureForTargetSelector:(SEL)arg1 ;
-(void)_forwardTargetInvocation:(id)arg1 ;
-(id)_undoStack;
-(BOOL)_endUndoGroupRemovingIfEmpty:(BOOL)arg1 ;
-(void)undoNestedGroup;
-(void)enableUndoRegistration;
-(void)_commitUndoGrouping;
-(void)_rollbackUndoGrouping;
-(void)_delayAutomaticTermination:(double)arg1 ;
-(NSArray *)runLoopModes;
-(void)_scheduleAutomaticTopLevelGroupEnding;
-(void)_prepareEventGrouping;
-(void)_postCheckpointNotification;
-(void)_cancelAutomaticTopLevelGroupEnding;
-(void)_registerUndoObject:(id)arg1 ;
-(void)_setGroupIdentifier:(id)arg1 ;
-(NSString *)undoActionName;
-(id)undoMenuTitleForUndoActionName:(id)arg1 ;
-(NSString *)redoActionName;
-(id)redoMenuTitleForUndoActionName:(id)arg1 ;
-(void)setLevelsOfUndo:(unsigned long long)arg1 ;
-(unsigned long long)levelsOfUndo;
-(void)setRunLoopModes:(NSArray *)arg1 ;
-(BOOL)isRedoing;
-(id)prepareWithInvocationTarget:(id)arg1 ;
-(void)registerUndoWithTarget:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setActionIsDiscardable:(BOOL)arg1 ;
-(BOOL)undoActionIsDiscardable;
-(BOOL)redoActionIsDiscardable;
-(void)removeAllActionsWithTarget:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isUndoRegistrationEnabled;
-(void)removeAllActions;
-(void)disableUndoRegistration;
-(void)_processEndOfEventNotification:(id)arg1 ;
-(long long)groupingLevel;
-(BOOL)canUndo;
-(BOOL)canRedo;
-(void)undo;
-(void)redo;
-(NSString *)redoMenuItemTitle;
-(NSString *)undoMenuItemTitle;
-(BOOL)isUndoing;
-(void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(BOOL)_shouldCoalesceTypingForText:(id)arg1 :(id)arg2 ;
-(void)setActionName:(id)arg1 ;
-(BOOL)groupsByEvent;
-(void)setGroupsByEvent:(BOOL)arg1 ;
-(void)beginUndoGrouping;
-(void)endUndoGrouping;
@end

