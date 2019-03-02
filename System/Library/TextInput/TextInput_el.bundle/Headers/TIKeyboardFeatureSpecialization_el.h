/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:56:57 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/TextInput/TextInput_el.bundle/TextInput_el
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_el/TextInput_el-Structs.h>
#import <TextInputCore/TIKeyboardFeatureSpecialization.h>

@interface TIKeyboardFeatureSpecialization_el : TIKeyboardFeatureSpecialization
-(id)nonstopPunctuationCharacters;
-(id)sentencePrefixingCharacters;
-(id)sentenceDelimitingCharacters;
-(id)sentenceTrailingCharacters;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(TIInputManager*)createInputManager;
-(BOOL)doesComposeText;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
@end
