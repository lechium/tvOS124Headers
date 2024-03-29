/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCROBrailleDriverProtocol;
#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSData, NSMutableAttributedString, SCROBrailleLineVirtualStatus, SCROBrailleChunk, NSArray, NSDictionary, NSMutableArray, NSAttributedString;

@interface SCROBrailleLine : NSObject {

	id<SCROBrailleDriverProtocol> _brailleDriver;
	long long _size;
	long long _statusSize;
	long long _insetSize;
	long long _lineOffset;
	long long _leftInset;
	long long _rightInset;
	long long _masterStatusCellIndex;
	long long _iBeamLocation;
	long long _focusLocation;
	NSRange _selectionRange;
	int _displayMode;
	int _lineFocus;
	BOOL _displayEnabled;
	BOOL _needsDisplayFlush;
	BOOL _needsStatusFlush;
	BOOL _needsFocusFlush;
	BOOL _blink;
	BOOL _currentUnread;
	BOOL _anyUnread;
	BOOL _isPanning;
	BOOL _showDotsSevenAndEight;
	BOOL _brailleChunksAreDirty;
	char* _displayBuffer;
	char* _mainCellsBuffer;
	char* _displayFilter;
	char* _blinkerBuffer;
	char* _statusFilter;
	NSData* _statusData;
	NSMutableAttributedString* _lineBuffer;
	id _appToken;
	long long _firstToken;
	long long _lastToken;
	SCROBrailleLineVirtualStatus* _virtualStatus;
	BOOL _wordWrapEnabled;
	BOOL _isKeyboardHelpOn;
	unsigned long long _generationID;
	SCROBrailleChunk* _editingChunk;
	SCROBrailleChunk* _chunkPendingTranslation;
	NSArray* _chunkArray;
	NSDictionary* _chunkDictionary;
	NSMutableArray* _pendingBrailleStringDictionaries;

}

@property (assign,nonatomic,__weak) SCROBrailleChunk * editingChunk;                         //@synthesize editingChunk=_editingChunk - In the implementation block
@property (assign,nonatomic,__weak) SCROBrailleChunk * chunkPendingTranslation;              //@synthesize chunkPendingTranslation=_chunkPendingTranslation - In the implementation block
@property (nonatomic,retain) NSArray * chunkArray;                                           //@synthesize chunkArray=_chunkArray - In the implementation block
@property (nonatomic,retain) NSDictionary * chunkDictionary;                                 //@synthesize chunkDictionary=_chunkDictionary - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingBrailleStringDictionaries;              //@synthesize pendingBrailleStringDictionaries=_pendingBrailleStringDictionaries - In the implementation block
@property (nonatomic,readonly) BOOL needsDisplayFlush;                                       //@synthesize needsDisplayFlush=_needsDisplayFlush - In the implementation block
@property (assign,nonatomic) BOOL displayEnabled;                                            //@synthesize displayEnabled=_displayEnabled - In the implementation block
@property (assign,nonatomic) BOOL wordWrapEnabled;                                           //@synthesize wordWrapEnabled=_wordWrapEnabled - In the implementation block
@property (assign,nonatomic) BOOL isKeyboardHelpOn;                                          //@synthesize isKeyboardHelpOn=_isKeyboardHelpOn - In the implementation block
@property (assign,nonatomic) long long lineOffset;                                           //@synthesize lineOffset=_lineOffset - In the implementation block
@property (assign,nonatomic) unsigned long long generationID;                                //@synthesize generationID=_generationID - In the implementation block
@property (nonatomic,readonly) BOOL hasEdits; 
@property (nonatomic,readonly) BOOL wantsEdits; 
@property (nonatomic,readonly) BOOL shouldTranslateNow; 
@property (nonatomic,readonly) NSAttributedString * editingString; 
+(void)initialize;
-(void)setFormatter:(id)arg1 ;
-(void)_flush;
-(void)setDisplayMode:(int)arg1 ;
-(BOOL)insertBrailleStringAtCursor:(id)arg1 modifiers:(id)arg2 ;
-(BOOL)hasEdits;
-(long long)locationForIndex:(long long)arg1 ;
-(BOOL)deleteAtCursorShouldTranslate:(out BOOL*)arg1 deletedText:(id*)arg2 ;
-(BOOL)forwardDeleteAtCursorShouldTranslate:(out BOOL*)arg1 ;
-(BOOL)shouldTranslateNow;
-(id)translatedTextForBraille:(out id*)arg1 replacingTextInRange:(out NSRange*)arg2 cursor:(out unsigned long long*)arg3 ;
-(void)discardEdits;
-(BOOL)moveCursorLeft;
-(BOOL)moveCursorRight;
-(void)setMasterStatusCellIndex:(long long)arg1 ;
-(long long)masterStatusCellIndex;
-(void)setShowDotsSevenAndEight:(BOOL)arg1 ;
-(BOOL)showDotsSevenAndEight;
-(void)setWordWrapEnabled:(BOOL)arg1 ;
-(BOOL)wordWrapEnabled;
-(id)initWithDriver:(id)arg1 mainSize:(long long)arg2 statusSize:(long long)arg3 ;
-(id)newLineDescriptor;
-(long long)tokenForRouterIndex:(long long*)arg1 location:(long long*)arg2 appToken:(id*)arg3 ;
-(BOOL)anyUnread;
-(BOOL)currentUnread;
-(BOOL)canPanLeft;
-(BOOL)canPanRight;
-(NSAttributedString *)editingString;
-(void)setVirtualStatus:(id)arg1 alignment:(int)arg2 ;
-(void)setRealStatus:(id)arg1 ;
-(void)setMainSize:(long long)arg1 ;
-(void)setStatusSize:(long long)arg1 ;
-(void)setIsKeyboardHelpOn:(BOOL)arg1 ;
-(BOOL)wantsEdits;
-(BOOL)panLeft;
-(id)appToken;
-(long long)firstToken;
-(BOOL)panRight;
-(long long)lastToken;
-(long long)lineOffset;
-(BOOL)moveCursorToRouterIndex:(unsigned long long)arg1 didLeaveEditingContext:(out BOOL*)arg2 forwardToScreenReader:(out BOOL*)arg3 ;
-(unsigned long long)textCursorIndex;
-(id)spokenStringForDeletedBrailleString:(id)arg1 speakLiterally:(out BOOL*)arg2 ;
-(BOOL)getStatusRouterIndex:(long long*)arg1 forRawIndex:(long long)arg2 ;
-(BOOL)needsDisplayFlush;
-(void)blinker;
-(BOOL)isKeyboardHelpOn;
-(id)spokenStringForInsertedBrailleString:(id)arg1 speakLiterally:(out BOOL*)arg2 ;
-(void)setLineFocus:(int)arg1 ;
-(void)setCurrentUnread:(BOOL)arg1 ;
-(void)setAnyUnread:(BOOL)arg1 ;
-(void)setLineOffset:(long long)arg1 ;
-(void)setAppToken:(id)arg1 ;
-(int)lineFocus;
-(NSArray *)chunkArray;
-(NSDictionary *)chunkDictionary;
-(SCROBrailleChunk *)editingChunk;
-(void)_updateOffsets;
-(BOOL)_allowInset;
-(NSMutableArray *)pendingBrailleStringDictionaries;
-(void)setPendingBrailleStringDictionaries:(NSMutableArray *)arg1 ;
-(BOOL)_blink:(BOOL)arg1 ;
-(BOOL)_setMainCells:(const char*)arg1 length:(long long)arg2 ;
-(void)_flushRealStatus;
-(void)addAttributedStringToLineBuffer:(id)arg1 fromChunkWithIndex:(unsigned long long)arg2 brailleOffset:(unsigned long long)arg3 ;
-(void)addAttributedPaddingToLineBuffer:(id)arg1 chunkWithIndex:(unsigned long long)arg2 ;
-(SCROBrailleChunk *)chunkPendingTranslation;
-(unsigned long long)_lengthPrecedingChunkPendingTranslation;
-(unsigned long long)_cursorOffset;
-(void)setChunkPendingTranslation:(SCROBrailleChunk *)arg1 ;
-(id)_chunkBeforeEditingChunk;
-(void)setEditingChunk:(SCROBrailleChunk *)arg1 ;
-(id)_chunkAfterEditingChunk;
-(unsigned long long)bufferIndexForRouterIndex:(unsigned long long)arg1 ;
-(unsigned long long)_chunkIndexForLineBufferIndex:(unsigned long long)arg1 ;
-(id)_chunkAtLineBufferIndex:(unsigned long long)arg1 ;
-(void)_didMoveToChunk:(id)arg1 ;
-(id)_translatedTextInIsolationForBraille:(id)arg1 contracted:(BOOL)arg2 ;
-(id)_trimCommonPrefixWithString:(id)arg1 fromString:(id)arg2 ;
-(id)_translatedTextForPrefixBraille:(id)arg1 printBraille:(id)arg2 contracted:(BOOL)arg3 ;
-(id)_dotDescriptionForBrailleString:(id)arg1 ;
-(id)_spokenStringForBrailleString:(id)arg1 isDelete:(BOOL)arg2 speakLiterally:(out BOOL*)arg3 ;
-(id)_chunkBeforeEditingChunkInEnumerator:(id)arg1 ;
-(long long)_indexOfWhitespaceBeforeIBeam:(long long)arg1 inLine:(id)arg2 ;
-(long long)_indexOfWhitespaceAfterIBeam:(long long)arg1 inLine:(id)arg2 ;
-(NSRange)textRangeForBrailleRange:(NSRange)arg1 ;
-(void)setDisplayEnabled:(BOOL)arg1 ;
-(BOOL)_moveToBrailleIndex:(unsigned long long)arg1 ;
-(BOOL)displayEnabled;
-(void)setChunkArray:(NSArray *)arg1 ;
-(void)setChunkDictionary:(NSDictionary *)arg1 ;
-(unsigned long long)generationID;
-(void)setGenerationID:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(int)displayMode;
-(BOOL)display;
@end

