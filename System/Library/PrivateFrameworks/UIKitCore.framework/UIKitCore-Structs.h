/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWebSelectionHandle, NSTimer, NSMutableArray, UIWebPDFView, DOMNode;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	unsigned val[8];
} SCD_Struct_UI1;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _NSZone* NSZoneRef;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct CGImage* CGImageRef;

typedef struct __CFString* CFStringRef;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	BOOL field5;
	double field6;
	int field7;
} SCD_Struct_UI9;

typedef struct CGVector {
	double dx;
	double dy;
} CGVector;

typedef struct CGContext* CGContextRef;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef struct {
	UIEdgeInsets field1;
	UIEdgeInsets field2;
	UIEdgeInsets field3;
	UIEdgeInsets field4;
	UIEdgeInsets field5;
} SCD_Struct_UI13;

typedef struct CGPath* CGPathRef;

typedef struct CATransform3D {
	double m11;
	double m12;
	double m13;
	double m14;
	double m21;
	double m22;
	double m23;
	double m24;
	double m31;
	double m32;
	double m33;
	double m34;
	double m41;
	double m42;
	double m43;
	double m44;
} CATransform3D;

typedef struct __GSEvent* GSEventRef;

typedef struct NSDirectionalEdgeInsets {
	double top;
	double leading;
	double bottom;
	double trailing;
} NSDirectionalEdgeInsets;

typedef struct __CFCharacterSet* CFCharacterSetRef;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct {
	unsigned field1 : 1;
} SCD_Struct_UI20;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
} SCD_Struct_UI21;

typedef struct {
	int commonRowHorizontalAlignment;
	int lastRowHorizontalAlignment;
	int rowVerticalAlignment;
} SCD_Struct_UI22;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	BOOL field1;
	double field2;
	CGSize field3;
	CGSize field4;
	CGRect field5;
	double field6;
	BOOL field7;
	BOOL field8;
	UIEdgeInsets field9;
} SCD_Struct_UI24;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_UI25;

typedef struct {
	BOOL animateContentRotation;
	BOOL preserveHeight;
	BOOL avoidFadingBottomOfContent;
	BOOL skipSnapshotOfEndState;
	BOOL preventAdditveAnimations;
	double contentStretchRightEdgeInset;
	int edgeClip;
} SCD_Struct_UI26;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	BOOL field5;
	BOOL field6;
	BOOL field7;
	BOOL field8;
} SCD_Struct_UI27;

typedef struct __DCSDictionary* DCSDictionaryRef;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	long long width;
	long long height;
} SCD_Struct_UI30;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	id field5;
	CGSize field6;
} SCD_Struct_UI31;

typedef struct {
	id field1;
	double field2;
	double field3;
	SCD_Struct_UI31 field4;
	SCD_Struct_UI31 field5;
	SCD_Struct_UI31 field6;
	SCD_Struct_UI31 field7;
	BOOL field8;
} SCD_Struct_UI32;

typedef struct CGColor* CGColorRef;

typedef struct ui_archive_entry* ui_archive_entryRef;

typedef struct ui_archive* ui_archiveRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	float x;
	float y;
} SCD_Struct_UI37;

typedef struct {
	SCD_Struct_UI37 position;
	 color;
} SCD_Struct_UI38;

typedef struct {
	double field1;
	long long field2;
	double field3;
	double field4;
	double field5;
	double field6;
} SCD_Struct_UI39;

typedef struct {
	id field1;
	unsigned long long field2;
} SCD_Struct_UI40;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	CGPoint origin;
	CGPoint offset;
	int position;
	CGPoint desiredPoint;
	CGRect desiredBounds;
} SCD_Struct_UI42;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
} SCD_Struct_UI43;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
} SCD_Struct_UI44;

typedef struct CGShading* CGShadingRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct CGPDFPage* CGPDFPageRef;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
} SCD_Struct_UI48;

typedef struct __CVBuffer* CVBufferRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
} SCD_Struct_UI51;

typedef struct {
	CGRect field1;
	CGRect field2;
	CGRect field3;
} SCD_Struct_UI52;

typedef struct {
	SCD_Struct_UI52 field1;
	SCD_Struct_UI52 field2;
	SCD_Struct_UI52 field3;
} SCD_Struct_UI53;

typedef struct {
	unsigned isKnown : 1;
	unsigned isSupported : 1;
	unsigned isInRange : 1;
} SCD_Struct_UI54;

typedef struct {
	long long userInterfaceIdiom;
	double displayScale;
	long long displayGamut;
	long long touchLevel;
	unsigned long long interactionModel;
	unsigned long long primaryInteractionModel;
	unsigned long long artworkSubtype;
	long long horizontalSizeClass;
	long long verticalSizeClass;
	long long userInterfaceStyle;
	long long layoutDirection;
	long long forceTouchCapability;
	long long preferredContentSizeCategory;
	double displayCornerRadius;
} SCD_Struct_UI55;

typedef struct UIBoundingPathBitmapDataSkipRegion {
	unsigned long long y;
	unsigned long long height;
} UIBoundingPathBitmapDataSkipRegion;

typedef struct UIBoundingPathBitmapData {
	unsigned long long width;
	unsigned long long height;
	UIBoundingPathBitmapDataSkipRegion skipRegion;
	unsigned long long nodeCount;
	unsigned long long maximumNodesPerRow;
	unsigned short rows;
} UIBoundingPathBitmapData;

typedef struct {
	unsigned idiom : 6;
	unsigned landscape : 1;
	unsigned split : 1;
	unsigned appearance : 8;
	unsigned rendering : 8;
	unsigned padding : 8;
} SCD_Struct_UI58;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct CGGradient* CGGradientRef;

typedef union {
	SCD_Struct_UI58 styling;
	int intValue;
} SCD_Union_UI62;

typedef struct {
	double amount;
	int unit;
} SCD_Struct_UI63;

typedef struct {
	SCD_Struct_UI63 field1[4];
} SCD_Struct_UI64;

typedef struct {
	CGPoint field1;
	double field2;
} SCD_Struct_UI65;

typedef struct {
	CGPoint point;
	double force;
} SCD_Struct_UI66;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct {
	CGRect field1;
	CGRect field2;
} SCD_Struct_UI68;

typedef struct UIPeripheralAnimationGeometry {
	CGPoint outPosition;
	CGPoint inPosition;
	CGRect bounds;
	CGAffineTransform transform;
	double targetFrameHeightDelta;
} UIPeripheralAnimationGeometry;

typedef struct {
	id field1;
	BOOL field2;
	int field3;
	BOOL field4;
	BOOL field5;
	BOOL field6;
	BOOL field7;
	BOOL field8;
	BOOL field9;
	BOOL field10;
	BOOL field11;
	BOOL field12;
	BOOL field13;
} SCD_Struct_UI70;

typedef struct __CTLine* CTLineRef;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_UI72;

typedef union GLKVector3 {
	SCD_Struct_UI72 field1;
	SCD_Struct_UI72 field2;
	SCD_Struct_UI72 field3;
	float v[3];
} GLKVector3;

typedef struct {
	GLKVector3 v;
	float s;
} SCD_Struct_UI74;

typedef struct {
	float x;
	float y;
	float z;
	float w;
} SCD_Struct_UI75;

typedef union GLKQuaternion {
	SCD_Struct_UI74 field1;
	SCD_Struct_UI75 field2;
	float q[4];
} GLKQuaternion;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct __GSKeyboard* GSKeyboardRef;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct __CFMessagePort* CFMessagePortRef;

typedef struct {
	unsigned long long senderID;
	double controllerState[16];
	double normalizedLeftStickState[4];
	double normalizedRightStickState[4];
	double normalizedShoulderButtonState[4];
} SCD_Struct_UI82;

typedef struct {
	int phase;
	CGPoint position;
	double timestamp;
	double azimuth;
	double altitude;
	double pressure;
} SCD_Struct_UI83;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	id field3;
	/*function pointer*/void* field4;
	id field5;
	/*function pointer*/void* field6;
} SCD_Struct_UI84;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct {
	BOOL field1[41];
	char field2[64];
	char field3[64];
	char field4[256];
	int field5;
	int field6;
	int field7;
	int field8;
	char field9[100];
	char field10[100];
	char field11[100];
	char field12[100];
	char field13[100];
	char field14[2][1024];
	unsigned field15;
	unsigned field16;
	int field17;
	int field18;
	unsigned field19;
	unsigned field20;
	int field21;
	unsigned field22;
	char field23[150];
	int field24;
	int field25;
	unsigned field26 : 1;
	unsigned field27 : 1;
	unsigned field28 : 1;
	char field29[256];
	unsigned field30 : 1;
	unsigned field31 : 1;
	unsigned field32 : 1;
	unsigned field33 : 1;
	unsigned field34 : 1;
	unsigned field35;
	unsigned field36 : 1;
	unsigned field37 : 1;
	unsigned field38 : 1;
	char field39[256];
	char field40[256];
	char field41[100];
	unsigned field42 : 1;
	unsigned field43 : 1;
	unsigned field44 : 1;
	double field45;
	unsigned field46 : 1;
	unsigned field47 : 1;
	char field48[100];
	char field49[100];
} SCD_Struct_UI86;

typedef struct {
	BOOL itemIsEnabled[41];
	char timeString[64];
	char shortTimeString[64];
	char dateString[256];
	int gsmSignalStrengthRaw;
	int secondaryGsmSignalStrengthRaw;
	int gsmSignalStrengthBars;
	int secondaryGsmSignalStrengthBars;
	char serviceString[100];
	char secondaryServiceString[100];
	char serviceCrossfadeString[100];
	char secondaryServiceCrossfadeString[100];
	char serviceImages[2][100];
	char operatorDirectory[1024];
	unsigned serviceContentType;
	unsigned secondaryServiceContentType;
	int wifiSignalStrengthRaw;
	int wifiSignalStrengthBars;
	unsigned dataNetworkType;
	unsigned secondaryDataNetworkType;
	int batteryCapacity;
	unsigned batteryState;
	char batteryDetailString[150];
	int bluetoothBatteryCapacity;
	int thermalColor;
	unsigned thermalSunlightMode : 1;
	unsigned slowActivity : 1;
	unsigned syncActivity : 1;
	char activityDisplayId[256];
	unsigned bluetoothConnected : 1;
	unsigned displayRawGSMSignal : 1;
	unsigned displayRawWifiSignal : 1;
	unsigned locationIconType : 1;
	unsigned quietModeInactive : 1;
	unsigned tetheringConnectionCount;
	unsigned batterySaverModeActive : 1;
	unsigned deviceIsRTL : 1;
	unsigned lock : 1;
	char breadcrumbTitle[256];
	char breadcrumbSecondaryTitle[256];
	char personName[100];
	unsigned electronicTollCollectionAvailable : 1;
	unsigned wifiLinkWarning : 1;
	unsigned wifiSearching : 1;
	double backgroundActivityDisplayStartDate;
	unsigned shouldShowEmergencyOnlyStatus : 1;
	unsigned secondaryCellularConfigured : 1;
	char primaryServiceBadgeString[100];
	char secondaryServiceBadgeString[100];
} SCD_Struct_UI87;

typedef struct {
	BOOL overrideItemIsEnabled[41];
	unsigned overrideTimeString : 1;
	unsigned overrideDateString : 1;
	unsigned overrideGsmSignalStrengthRaw : 1;
	unsigned overrideSecondaryGsmSignalStrengthRaw : 1;
	unsigned overrideGsmSignalStrengthBars : 1;
	unsigned overrideSecondaryGsmSignalStrengthBars : 1;
	unsigned overrideServiceString : 1;
	unsigned overrideSecondaryServiceString : 1;
	unsigned overrideServiceImages : 2;
	unsigned overrideOperatorDirectory : 1;
	unsigned overrideServiceContentType : 1;
	unsigned overrideSecondaryServiceContentType : 1;
	unsigned overrideWifiSignalStrengthRaw : 1;
	unsigned overrideWifiSignalStrengthBars : 1;
	unsigned overrideDataNetworkType : 1;
	unsigned overrideSecondaryDataNetworkType : 1;
	unsigned disallowsCellularDataNetworkTypes : 1;
	unsigned overrideBatteryCapacity : 1;
	unsigned overrideBatteryState : 1;
	unsigned overrideBatteryDetailString : 1;
	unsigned overrideBluetoothBatteryCapacity : 1;
	unsigned overrideThermalColor : 1;
	unsigned overrideSlowActivity : 1;
	unsigned overrideActivityDisplayId : 1;
	unsigned overrideBluetoothConnected : 1;
	unsigned overrideBreadcrumb : 1;
	unsigned overrideLock;
	unsigned overrideDisplayRawGSMSignal : 1;
	unsigned overrideDisplayRawWifiSignal : 1;
	unsigned overridePersonName : 1;
	unsigned overrideWifiLinkWarning : 1;
	unsigned overrideSecondaryCellularConfigured : 1;
	unsigned overridePrimaryServiceBadgeString : 1;
	unsigned overrideSecondaryServiceBadgeString : 1;
	SCD_Struct_UI87 values;
} SCD_Struct_UI88;

typedef struct __CFMachPort* CFMachPortRef;

typedef struct {
	BOOL field1[41];
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 2;
	unsigned field11 : 1;
	unsigned field12 : 1;
	unsigned field13 : 1;
	unsigned field14 : 1;
	unsigned field15 : 1;
	unsigned field16 : 1;
	unsigned field17 : 1;
	unsigned field18 : 1;
	unsigned field19 : 1;
	unsigned field20 : 1;
	unsigned field21 : 1;
	unsigned field22 : 1;
	unsigned field23 : 1;
	unsigned field24 : 1;
	unsigned field25 : 1;
	unsigned field26 : 1;
	unsigned field27 : 1;
	unsigned field28;
	unsigned field29 : 1;
	unsigned field30 : 1;
	unsigned field31 : 1;
	unsigned field32 : 1;
	unsigned field33 : 1;
	unsigned field34 : 1;
	unsigned field35 : 1;
	SCD_Struct_UI87 field36;
} SCD_Struct_UI90;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	BOOL field3;
	double field4;
	double field5;
	double field6;
} SCD_Struct_UI91;

typedef struct {
	unsigned long long field1;
	BOOL field2;
	BOOL field3;
	double field4;
	double field5;
} SCD_Struct_UI92;

typedef struct {
	unsigned long long direction;
	BOOL primaryActionIsDestructive;
	BOOL primaryActionCanBeTriggeredBySwipe;
	double openThreshold;
	double confirmationThreshold;
} SCD_Struct_UI93;

typedef struct {
	unsigned long long direction;
	unsigned long long targetSwipeState;
	BOOL animated;
	double xOffset;
	double initialSpringVelocity;
	double springStiffness;
} SCD_Struct_UI94;

typedef struct __CFStringTokenizer* CFStringTokenizerRef;

typedef struct {
	UIWebSelectionHandle* scrollingHandle;
	double startTime;
	int direction;
	NSTimer* timer;
} SCD_Struct_UI96;

typedef struct {
	BOOL flipPossible;
	BOOL rectsChanged;
	CGRect originalSelectionRect;
} SCD_Struct_UI97;

typedef struct {
	UIWebSelectionHandle* start;
	UIWebSelectionHandle* end;
	CGSize startingOffset;
	BOOL anchorAtStart;
	SCD_Struct_UI97 flipData;
} SCD_Struct_UI98;

typedef struct __CFSet* CFSetRef;

typedef struct {
	CGPoint field1;
	unsigned long long field2;
} SCD_Struct_UI100;

typedef struct _compressed_pair<ui_size_cache_value *, std::__1::allocator<ui_size_cache_value> > {
	/*function pointer*/void* __value_;
} compressed_pair<ui_size_cache_value *, std::__1::allocator<ui_size_cache_value> >;

typedef struct ui_size_cache {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<ui_size_cache_value *, std::__1::allocator<ui_size_cache_value> > __end_cap_;
} ui_size_cache;

typedef struct {
	double field1;
	double field2;
	CGRect field3;
	long long field4;
} SCD_Struct_UI103;

typedef struct {
	id field1;
	id field2;
} SCD_Struct_UI104;

typedef struct __IOSurfaceAccelerator* IOSurfaceAcceleratorRef;

typedef struct {
	CGPoint field1;
	CGPoint field2;
	double field3;
	double field4;
} SCD_Struct_UI106;

typedef struct {
	SCD_Struct_UI1 field1;
	CGPoint field2;
	CGPoint field3;
	0 field4;
	6 field5;
} SCD_Struct_UI107;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_UI108;

typedef struct {
	SCD_Struct_UI1 field1;
	0 field2;
	8 field3;
	SCD_Struct_UI1 field4;
	0 field5;
	8 field6;
	SCD_Struct_UI1 field7;
	0 field8;
	8 field9;
	BOOL field10;
	BOOL field11;
	BOOL field12;
} SCD_Struct_UI109;

typedef struct {
	CGPoint dampingRatioState;
	CGPoint responseState;
	double tension;
	double friction;
} SCD_Struct_UI110;

typedef struct {
	double targetValue;
	double tension;
	double friction;
} SCD_Struct_UI111;

typedef struct {
	SCD_Struct_UI111 dampingRatioParameters;
	SCD_Struct_UI111 responseParameters;
	SCD_Struct_UI111 targetParameters;
	BOOL dampingRatioSmoothingDisabled;
	BOOL responseSmoothingDisabled;
	BOOL targetSmoothingDisabled;
} SCD_Struct_UI112;

typedef struct {
	double field1;
	double field2;
	BOOL field3;
	BOOL field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	double field11;
} SCD_Struct_UI113;

typedef struct {
	double dampingRatio;
	double response;
	BOOL initialDampingRatioSpecified;
	BOOL initialResponseSpecified;
	double initialDampingRatio;
	double initialResponse;
	double dampingRatioSmoothing;
	double responseSmoothing;
	double targetSmoothing;
	double projectionDeceleration;
	double impulse;
} SCD_Struct_UI114;

typedef struct {
	SCD_Struct_UI1 field1;
	1 field2;
	1 field3;
	SCD_Struct_UI1 field4;
	1 field5;
	1 field6;
	SCD_Struct_UI1 field7;
	1 field8;
	1 field9;
	BOOL field10;
	BOOL field11;
	BOOL field12;
} SCD_Struct_UI115;

typedef struct {
	double rotationX;
	double rotationY;
	double rotationZ;
	double scaleX;
	double scaleY;
	double scaleZ;
	double translationX;
	double translationY;
	double translationZ;
} SCD_Struct_UI116;

typedef struct {
	double firstBaseline;
	double lastBaseline;
	CGRect referenceBounds;
	long long measuredNumberOfLines;
} SCD_Struct_UI117;

typedef struct {
	NSMutableArray* all;
	NSMutableArray* html;
	NSMutableArray* javascript;
	NSMutableArray* css;
	NSMutableArray* error;
	NSMutableArray* warning;
	NSMutableArray* tip;
	NSMutableArray* log;
} SCD_Struct_UI118;

typedef struct {
	UIWebPDFView* view;
	NSTimer* timer;
} SCD_Struct_UI119;

typedef struct {
	NSTimer* timer;
	CGPoint location;
	BOOL isBlocked;
	BOOL isCancelled;
	BOOL isOnWebThread;
	BOOL isDisplayingHighlight;
	BOOL attemptedClick;
	CGPoint lastPanTranslation;
	DOMNode* element;
	id delegate;
	id interactionSheet;
	 UIWebRotatingAlertController;
	BOOL allowsImageSheet;
	BOOL allowsDataDetectorsSheet;
	BOOL allowsLinkSheet;
	BOOL acceptsFirstResponder;
	double documentScale;
	id previewHintRects;
	 NSArray;
	id previewHintImage;
	 UIImage;
} SCD_Struct_UI120;

typedef struct UIWebViewportConfiguration {
	CGSize size;
	float initialScale;
	float minimumScale;
	float maximumScale;
	BOOL allowsUserScaling;
	BOOL allowsShrinkToFit;
	BOOL avoidsUnsafeArea;
} UIWebViewportConfiguration;

typedef struct PDFHistoryItem {
	BOOL restorePending;
	BOOL isInitialScale;
	double zoomScale;
	CGPoint contentOffset;
} PDFHistoryItem;

typedef struct __CTFont* CTFontRef;

typedef struct CGPDFFont* CGPDFFontRef;

typedef struct UIWebTouchEvent {
	int type;
	double timestamp;
	CGPoint locationInScreenCoordinates;
	CGPoint locationInDocumentCoordinates;
	double scale;
	double rotation;
	BOOL inJavaScriptGesture;
	_UIWebTouchPoint touchPoints;
	unsigned touchPointCount;
	BOOL isPotentialTap;
} UIWebTouchEvent;
