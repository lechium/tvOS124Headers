/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARUserProfileBuilder : NSObject {

	map<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > > > > >* _userData;
	shared_ptr<quasar::LmeDataFactory>* _dataFactory;
	unique_ptr<sdapi::SdapiTokenizer, std::__1::default_delete<sdapi::SdapiTokenizer> >* _tokenizer;
	unique_ptr<quasar::G2P, std::__1::default_delete<quasar::G2P> >* _g2p;
	shared_ptr<quasar::PronCache<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > > >* _pronCache;
	BasicTextSanitizer* _sanitizer;
	unique_ptr<quasar::PersonalizationRecipe, std::__1::default_delete<quasar::PersonalizationRecipe> >* _personalizationRecipe;
	unique_ptr<quasar::LmeData, std::__1::default_delete<quasar::LmeData> >* _quasarLmeData;

}
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 language:(id)arg2 overrides:(id)arg3 sdapiOverrides:(id)arg4 generalVoc:(id)arg5 emptyVoc:(id)arg6 pgVoc:(id)arg7 lexiconEnh:(id)arg8 tokenEnh:(id)arg9 paramsetHolder:(id)arg10 ;
-(id)initWithConfiguration:(id)arg1 withLanguage:(id)arg2 withSdapiOverrides:(id)arg3 withSdapiConfig:(id)arg4 ;
-(id)initWithConfiguration:(id)arg1 language:(id)arg2 sdapiOverrides:(id)arg3 generalVoc:(id)arg4 emptyVoc:(id)arg5 pgVoc:(id)arg6 lexiconEnh:(id)arg7 tokenEnh:(id)arg8 paramsetHolder:(id)arg9 ;
-(void)addWordWithParts:(id)arg1 templateName:(id)arg2 ;
-(void)removeAllWords;
-(id)dataProfile;
-(void)readUserProfile:(id)arg1 ;
-(void)addPersonalizationData:(id)arg1 ;
-(void)addPersonalizationJsonData:(id)arg1 ;
-(void)writeOutUserDataToJson:(id)arg1 withConfig:(id)arg2 ;
-(id)pronunciationsForOrthography:(id)arg1 ;
-(id)sanitizedStringWithString:(id)arg1 ;
@end

