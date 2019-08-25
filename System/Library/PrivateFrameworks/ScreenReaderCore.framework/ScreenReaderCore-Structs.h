/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __CFString* CFStringRef;

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

typedef struct SCRCMathAverageValue {
	unsigned samples;
	50d fifo;
	int fifoIndex;
	double sum;
	double average;
	double current;
} SCRCMathAverageValue;

typedef struct SCRCFingerState {
	unsigned long long identifier;
	int xDirection;
	int yDirection;
	SCRCMathAverageValue normalizedVelocityPerSample;
	SCRCMathAverageValue deltaXPerSample;
	SCRCMathAverageValue deltaYPerSample;
	SCRCMathAverageValue distancePerSample;
	double distanceTraveledWithInertiaApplied;
	BOOL dragStalled;
	unsigned long long type;
	CGPoint startTouchPoint;
	CGPoint mostRecentTouchPoint;
	CGPoint lastDownPoint;
	double pressure;
	double altitude;
	double azimuth;
} SCRCFingerState;

typedef struct {
	BOOL isFingerCurrentlyDown;
	BOOL dead;
	BOOL gutterHasBeenTouched;
	unsigned long long numFingersInCurrentGestureEvent;
	unsigned long long totalNumFingersInGesture;
	unsigned long long count;
	CGRect frame;
	CGPoint location[8];
	CGPoint locationPerTap[8];
	double thisTime;
	double lastTime;
} SCD_Struct_SC6;

typedef struct {
	BOOL isSplitting;
	BOOL isTapping;
	BOOL fastTrack;
	BOOL tapDead;
	BOOL timedOut;
	BOOL active;
	unsigned long long fingerIdentifier;
	double fingerDownTime;
	CGPoint startTapLocation;
	CGPoint lastTapLocation;
	CGPoint primaryFingerLocation;
	double tapDistance;
	int state;
} SCD_Struct_SC7;

typedef struct {
	int field1;
	int field2;
	double field3;
	double field4;
	double field5;
	double field6;
	unsigned long long field7;
	unsigned long long field8;
	unsigned long long field9;
	BOOL field10;
	CGPoint field11;
	double field12;
	double field13;
	double field14;
	CGPoint field15;
	CGPoint field16;
	CGPoint field17;
	CGPoint field18;
	CGPoint field19;
	CGRect field20;
	CGRect field21;
	double field22;
} SCD_Struct_SC8;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGImage* CGImageRef;

typedef struct URegularExpression* URegularExpressionRef;

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __CFRunLoop* CFRunLoopRef;

