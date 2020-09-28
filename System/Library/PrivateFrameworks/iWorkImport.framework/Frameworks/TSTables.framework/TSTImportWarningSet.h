/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSSPropertyCommandSerializing.h>

@class NSString;

@interface TSTImportWarningSet : NSObject <TSSPropertyCommandSerializing> {

	TSTImportWarningSetCellWarningFlags _cellWarning;
	NSString* _originalDataFormat;
	TSTImportFormulaWarning _formulaWarning;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)warningSetForFormulaReplacedForExcelCompat:(id)arg1 originalFormula:(id)arg2 ;
+(id)p_warningSetForFormulaWarningType:(long long)arg1 originalFormula:(id)arg2 supplementaryText:(id)arg3 ;
+(id)warningSetForCondFormatAboveAvgEqualAvg;
+(id)warningSetForCondFormatAboveAvgStdDev;
+(id)warningSetForCondFormatComplexFormula;
+(id)warningSetForCondFormatContainsErrors;
+(id)warningSetForCondFormatExpr;
+(id)warningSetForCondFormatNotContainsErrors;
+(id)warningSetForCondFormatParamatersNotAllTheSame;
+(id)warningSetForCondFormatStopIfTrue;
+(id)warningSetForCondFormatUnsupportedOperator;
+(id)warningSetForCondFormatUnsupportedStyling;
+(id)warningSetForCondFormatUnsupportedTimePeriod;
+(id)warningSetForUnsupportedCondFormat;
+(id)warningSetForDurationFormatRangeChanged;
+(id)warningSetForUnsupportedDataFormat:(id)arg1 ;
+(id)emptyWarningSet;
+(id)warningSetFor3DReferenceFormula:(id)arg1 ;
+(id)warningSetForArrayedFormula:(id)arg1 ;
+(id)warningSetForDifferentBehaviorForFunctionFormula:(id)arg1 originalFormula:(id)arg2 ;
+(id)warningSetForErrorTokenFormula:(id)arg1 ;
+(id)warningSetForExternalReferenceFormula:(id)arg1 ;
+(id)warningSetForNaturalLanguageFormula:(id)arg1 ;
+(id)warningSetForReferenceOutOfBoundsFormula:(id)arg1 ;
+(id)warningSetForSharedFormulaBaseNotFoundFormula:(id)arg1 ;
+(id)warningSetForUnknownName:(id)arg1 originalFormula:(id)arg2 ;
+(id)warningSetForUnsupportedFormula:(id)arg1 ;
+(id)warningSetForUnsupportedFunction:(id)arg1 originalFormula:(id)arg2 ;
+(id)warningSetForUnsupportedNameFormula:(id)arg1 originalFormula:(id)arg2 ;
+(id)warningSetForTransposedWithoutIssues:(id)arg1 ;
+(id)warningSetForTransposedWithIssues:(id)arg1 ;
+(id)warningSetForTransposeUnmodifiedWithIssues;
+(id)warningSetForFilteredColumnFormulaNotCopied;
+(id)cellDiffClearingAllWarningsWithContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)saveToArchive:(ImportWarningSetArchive*)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initFromArchive:(const ImportWarningSetArchive*)arg1 ;
-(id)initFromPropertyCommandMessage:(const Message*)arg1 unarchiver:(id)arg2 ;
-(void)saveToPropertyCommandMessage:(Message*)arg1 archiver:(id)arg2 ;
-(BOOL)tst_dataObjectIsEqual:(id)arg1 ;
-(unsigned long long)tst_dataObjectHash;
-(id)warningSetByAddingWarningsFromSet:(id)arg1 ;
-(long long)TSTImportFormulaWarningTypeFromArchive:(int)arg1 ;
-(BOOL)p_isPersistedWithFormulaWarningTypeEnumeration;
-(int)TSTImportFormulaWarningTypeToArchive;
-(id)localizedWarningStrings;
-(BOOL)areAnySet;
-(id)individualWarnings;
-(id)cellDiffClearingWarningsWithContext:(id)arg1 ;
-(id)warningSetByRemovingWarningsFromSet:(id)arg1 ;
@end
