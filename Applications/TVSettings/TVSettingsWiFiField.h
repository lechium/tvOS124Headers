//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController;

@interface TVSettingsWiFiField : NSObject
{
    _Bool _hasEverBeenDefined;	// 8 = 0x8
    id <NSObject><WFNetworkView> _provider;	// 16 = 0x10
    long long _fieldType;	// 24 = 0x18
    id _value;	// 32 = 0x20
}

+ (id)fieldsWithRequestedFields:(long long)arg1 provider:(id)arg2;	// IMP=0x000000010003b81c
+ (id)fieldsWithRequestedFields:(long long)arg1;	// IMP=0x000000010003b80c
+ (id)fieldWithFieldType:(long long)arg1 provider:(id)arg2;	// IMP=0x000000010003b7a0
+ (id)fieldWithFieldType:(long long)arg1;	// IMP=0x000000010003b764
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) _Bool hasEverBeenDefined; // @synthesize hasEverBeenDefined=_hasEverBeenDefined;
@property(nonatomic) long long fieldType; // @synthesize fieldType=_fieldType;
@property(nonatomic) __weak id <NSObject><WFNetworkView> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;	// IMP=0x000000010003c418
- (void)_synchronizeToProvider;	// IMP=0x000000010003c304
- (SEL)_providerSetter;	// IMP=0x000000010003c2a0
- (id)description;	// IMP=0x000000010003c1c0
- (_Bool)isSecure;	// IMP=0x000000010003c1ac
- (long long)keyboardType;	// IMP=0x000000010003c17c
- (id)buttonText;	// IMP=0x000000010003c10c
- (id)messageTextForNetwork:(id)arg1;	// IMP=0x000000010003bf10
- (id)headerText;	// IMP=0x000000010003bd58
@property(readonly, nonatomic) NSString *fieldName;
- (id)initWithFieldType:(long long)arg1 provider:(id)arg2;	// IMP=0x000000010003bb38
- (id)initWithFieldType:(long long)arg1;	// IMP=0x000000010003bb28
@property(retain, nonatomic) UIViewController *associatedViewController;

@end

