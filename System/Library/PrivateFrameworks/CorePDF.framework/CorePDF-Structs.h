/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	int byteCount;
	int currentPageCount;
	int renderJobsCount;
	BOOL memWarning;
} SCD_Struct_UI0;

typedef struct CGContext* CGContextRef;

typedef struct CGPath* CGPathRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGColor* CGColorRef;

typedef struct CGPDFPage* CGPDFPageRef;

typedef struct {
	CGPoint field1;
	CGPoint field2;
	CGPoint field3;
	CGPoint field4;
} SCD_Struct_UI6;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _NSZone* NSZoneRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct CGPDFLayout* CGPDFLayoutRef;

typedef struct CGPDFObject* CGPDFObjectRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct __CFArray* CFArrayRef;

typedef struct CGPDFNode* CGPDFNodeRef;

typedef struct CGPDFSelection* CGPDFSelectionRef;

typedef struct {
	long long location;
	long long length;
} SCD_Struct_CP17;

typedef struct {
	CGColor field1;
	CGRect field2;
	unsigned field3;
	id field4;
} SCD_Struct_CP18;

typedef struct {
	unsigned field1;
	unsigned field2;
	int field3;
	int field4;
	CGRect field5;
} SCD_Struct_CP19;

typedef struct CGPDFFont* CGPDFFontRef;

typedef struct CGFont* CGFontRef;

typedef struct {
	double fontStretch;
	double fontWeight;
	unsigned flags;
	CGRect fontBBox;
	double italicAngle;
	double ascent;
	double descent;
	double leading;
	double capHeight;
	double xHeight;
	double stemV;
	double stemH;
	double avgWidth;
	double maxWidth;
	double missingWidth;
	double spaceWidth;
	double underlinePosition;
	double underlineThickness;
} SCD_Struct_CP22;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGPDFDictionary* CGPDFDictionaryRef;

typedef struct {
	double field1;
	unsigned field2;
	double field3;
	double field4;
	unsigned field5;
	double field6;
	double field7;
	BOOL field8;
	double field9;
	double field10;
	double field11;
	double field12;
	double field13;
	double field14;
	double field15;
	double field16;
	double field17;
	double field18;
	double field19;
	BOOL field20;
} SCD_Struct_CP25;

typedef struct {
	unsigned field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_CP26;

typedef struct {
	unsigned field1;
	CGRect field2;
} SCD_Struct_CP27;

typedef struct __CFData* CFDataRef;

typedef struct {
	double field1;
	double field2;
	unsigned field3;
	CGRect field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	double field11;
	double field12;
	double field13;
	double field14;
	double field15;
	double field16;
	double field17;
	double field18;
} SCD_Struct_CP29;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	int field5;
	int field6;
	CPPDFStyle field7;
} SCD_Struct_CP32;

typedef struct {
	unsigned allocatedSize;
	unsigned size;
	unsigned count;
	/*function pointer*/void* stats;
	/*function pointer*/void* ordered;
} SCD_Struct_CP33;

typedef struct {
	id field1;
	unsigned field2;
	/*function pointer*/void* field3;
} SCD_Struct_CP34;

typedef struct {
	CGPoint field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
	unsigned field10;
	unsigned field11;
	unsigned field12;
	unsigned field13;
	unsigned field14;
	CGPoint field15;
	CGPoint field16;
	CGPoint field17;
	CGRect field18;
	double field19;
	double field20;
	BOOL field21;
	BOOL field22;
	BOOL field23;
} SCD_Struct_CP35;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFString* CFStringRef;

typedef struct CGPDFString* CGPDFStringRef;

typedef struct CGPDFArray* CGPDFArrayRef;

typedef struct CGImage* CGImageRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_CP41;

