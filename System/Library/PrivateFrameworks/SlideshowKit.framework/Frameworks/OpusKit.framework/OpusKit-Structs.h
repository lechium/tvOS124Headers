/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct CGImage* CGImageRef;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_OK2;

typedef struct {
	CLLocationCoordinate2D field1;
	SCD_Struct_OK2 field2;
} SCD_Struct_OK3;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct OpaqueJSValue* OpaqueJSValueRef;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef union {
	UIOffset offsetFromCenter;
	CGPoint anchorPoint;
} SCD_Union_OK10;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

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

typedef struct {
	id field1;
	id field2;
	double field3;
	CGSize field4;
	CGSize field5;
	float field6;
	CGSize field7;
	CGPoint field8;
	CGPoint field9;
	double field10;
	CGPoint field11;
	CGAffineTransform field12;
	BOOL field13;
	double field14;
} SCD_Struct_OK13;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct {
	CLLocationCoordinate2D center;
	CGSize span;
} SCD_Struct_OK15;

typedef struct {
	CGSize field1;
	CLLocationCoordinate2D field2;
} SCD_Struct_OK16;

typedef struct CGContext* CGContextRef;

