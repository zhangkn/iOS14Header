/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCalculationEngine.framework/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSNumber;

@interface TSCEError : NSObject <NSCopying> {

	NSDictionary* _errorDictionary;

}

@property (nonatomic,readonly) NSString * errorType; 
@property (nonatomic,readonly) NSString * errorClass; 
@property (nonatomic,readonly) id extraInfo; 
@property (nonatomic,readonly) NSNumber * debugOnlyErrorNumber; 
@property (nonatomic,readonly) NSString * functionName; 
@property (nonatomic,readonly) NSNumber * argIndex; 
@property (nonatomic,readonly) NSNumber * argIndex2; 
+(id)notReadyError;
+(void)raiseInvalidArgumentPairingsErrorForFunctionName:(id)arg1 hasInitialUnrelatedArgument:(BOOL)arg2 ;
+(void)raiseErrorForInvalidReference;
+(void)raiseRangeSizeMismatchErrorForFunctionName:(id)arg1 ;
+(void)raiseMixedTypeManipulationErrorForFunctionName:(id)arg1 ;
+(void)raiseUnknownFunctionErrorForString:(id)arg1 ;
+(void)raiseInvalidTokenInFormulaError;
+(id)referenceToNonexistentTableError:(const UUIDData<TSP::UUIDData>*)arg1 ;
+(id)durationNotAllowedError:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseInvalidDateManipulationError;
+(void)raiseNumberMinusDateError;
+(void)raiseComparisonTypeExceptionForLeftType:(int)arg1 rightType:(int)arg2 ;
+(void)raiseArgumentSetUsedOutOfContextError;
+(void)raiseTypeExceptionForValue:(TSCEValue*)arg1 functionSpec:(id)arg2 argumentIndex:(int)arg3 locale:(id)arg4 ;
+(void)raiseInvalidCurrencyComparisonError;
+(void)raiseInvalidComparisonError;
+(void)raiseMismatchedCurrenciesErrorForFunctionName:(id)arg1 ;
+(void)raiseDivideByZeroError;
+(void)raiseZeroToPowerOfZeroError;
+(void)raiseDurationNotAllowedError:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseValueErrorForFunctionName:(id)arg1 ;
+(id)errorDictionaryForType:(id)arg1 ;
+(id)errorWithDictionary:(id)arg1 ;
+(void)raiseAbortError;
+(id)invalidReferenceError;
+(id)errorDictionaryForType:(id)arg1 andClass:(id)arg2 extraInfo:(id)arg3 ;
+(id)errorDictionaryForType:(id)arg1 functionName:(id)arg2 extraInfo:(id)arg3 ;
+(id)errorDictionaryForType:(id)arg1 andClass:(id)arg2 ;
+(void)p_RaiseErrorForDictionary:(id)arg1 ;
+(BOOL)p_DictionaryRepresentsInvalidMergeReference:(id)arg1 ;
+(void)raiseErrorForError:(id)arg1 ;
+(id)errorDictionaryForType:(id)arg1 functionName:(id)arg2 ;
+(void)raiseErrorForInvalidReference:(TSCERangeRef)arg1 orString:(id)arg2 contextEntityUID:(const UUIDData<TSP::UUIDData>*)arg3 invalidMergeReference:(BOOL)arg4 disqualifiedFromEndCell:(BOOL)arg5 ;
+(void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 lowerBound:(double)arg3 lowerBoundInclusive:(BOOL)arg4 upperBound:(double)arg5 upperBoundInclusive:(BOOL)arg6 ;
+(void)raiseMatchNotFoundErrorForValue:(id)arg1 isRegex:(BOOL)arg2 afterMatch:(BOOL)arg3 previousValueToMatch:(id)arg4 previousValueIsRegex:(BOOL)arg5 occurrence:(int)arg6 matchesFound:(int)arg7 functionName:(id)arg8 ;
+(id)indirectErrorForRangeReference:(TSCERangeRef)arg1 hostTableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
+(id)errorDictionaryForType:(id)arg1 extraInfo:(id)arg2 ;
+(void)raiseMismatchedUnitsErrorForFunctionName:(id)arg1 argumentNumberString:(id)arg2 ;
+(id)invalidLiveStockAttributeError;
+(id)notAReferenceToAFormulaError;
+(id)invalidReferenceNameAttributeError;
+(id)invalidHistoricalStockAttributeError;
+(id)invalidLiveCurrencyAttributeError;
+(id)invalidHistoricalCurrencyAttributeError;
+(id)invalidHistoricalDateError;
+(id)remoteDataUnavailableErrorWithAttribute:(id)arg1 ;
+(id)errorForToken:(id)arg1 ;
+(id)syntaxError;
+(BOOL)exceptionIsFromCalcEngine:(id)arg1 ;
+(BOOL)exceptionIsCircularReferenceError:(id)arg1 ;
+(BOOL)exceptionIsRangeUsageError:(id)arg1 ;
+(id)circularReferenceError;
+(id)badReferenceError;
+(id)autoNumberAttachmentError;
+(id)attachmentError;
+(BOOL)exceptionIsInvalidMergeReference:(id)arg1 ;
+(void)raiseInvalidArrayContentsError;
+(id)abortError;
+(void)raiseNotReadyError;
+(void)raiseDisallowedStockModeError:(id)arg1 ;
+(void)raiseNumberError;
+(void)raiseNumberErrorForFunctionName:(id)arg1 ;
+(void)raiseAutoNumberAttachmentErrorInTextCell:(BOOL)arg1 ;
+(void)raiseAttachmentErrorInTextCell:(BOOL)arg1 ;
+(void)raiseValueNotAvailableErrorForFunctionName:(id)arg1 ;
+(void)raiseErrorForInvalidReference:(TSCERangeRef)arg1 orString:(id)arg2 contextEntityUID:(const UUIDData<TSP::UUIDData>*)arg3 ;
+(id)invalidMergeReference:(TSCERangeRef)arg1 contextEntityUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
+(void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 lowerBound:(double)arg3 lowerBoundInclusive:(BOOL)arg4 ;
+(void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 upperBound:(double)arg3 upperBoundInclusive:(BOOL)arg4 ;
+(void)raiseMatchNotFoundErrorForValue:(id)arg1 isRegex:(BOOL)arg2 functionName:(id)arg3 ;
+(void)raiseStartNumberExceedsStringLengthErrorForFunctionName:(id)arg1 ;
+(void)raiseDifferentNumberOfDataPointsErrorForFunctionName:(id)arg1 ;
+(id)invalidDateManipulationError;
+(void)raiseInvalidArgumentsErrorForFunctionName:(id)arg1 argumentIndex:(int)arg2 ;
+(void)raiseIndirectErrorForRangeReference:(TSCERangeRef)arg1 hostTableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
+(void)raiseNoModeError;
+(void)raiseEmptyArgumentError;
+(void)raiseEmptyArgumentSpecificErrorForArgumentNumber:(int)arg1 ;
+(void)raiseInvalidRangeUsageErrorForReference:(TSCERangeRef)arg1 ;
+(void)raiseInvalidHyperlinkError;
+(void)raiseDifferentNumberOfElementsErrorForFunctionName:(id)arg1 ;
+(void)raiseUnionInsideIntersectionError;
+(void)raiseCircularReferenceErrorWithReference:(id)arg1 ;
+(void)raiseNotAReferenceErrorForFunctionName:(id)arg1 ;
+(void)raiseNoSuitableArgumentsFoundErrorForFunctionName:(id)arg1 requiredType:(int)arg2 ;
+(void)raiseInvalidArgumentRelationshipErrorForFunctionName:(id)arg1 argIndex1:(int)arg2 argIndex2:(int)arg3 argsAscending:(BOOL)arg4 equalityPermitted:(BOOL)arg5 ;
+(void)raiseInvalidArgumentEqualityRelationshipErrorForFunctionName:(id)arg1 argIndex1:(int)arg2 argIndex2:(int)arg3 ;
+(void)raiseInvalidIndexForChooseError:(int)arg1 ;
+(void)raiseNonEmptyStringRequiredErrorForFunctionName:(id)arg1 ;
+(void)raiseStringDoesNotRepresentNumberErrorForFunctionName:(id)arg1 string:(id)arg2 ;
+(void)raiseStringDoesNotRepresentDateErrorForFunctionName:(id)arg1 string:(id)arg2 ;
+(void)raiseSignsMustMatchErrorForFunctionName:(id)arg1 ;
+(void)raiseRangeDoesNotSumToOneForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseUnsupportedR1C1StyleError;
+(void)raiseInvalidDateError;
+(void)raiseInvalidTimeError;
+(void)raiseNotAVectorError;
+(void)raiseInvalidProbabilityErrorForFunctionName:(id)arg1 ;
+(void)raiseNumberSmallerThanZeroError;
+(void)raiseArgumentEqualsToZeroErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raisePositionLargerThanArrayErrorForFunctionName:(id)arg1 ;
+(void)raiseInvalidFrequencyErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseInvalidTypeErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseInvalidTailErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseInvalidSubtotalFunctionNumberError;
+(void)raiseNumberDoesNotConvergeErrorForFunctionName:(id)arg1 ;
+(void)raiseNumberDoesNotConvergeWithEstimateErrorForFunctionName:(id)arg1 ;
+(void)raiseTooFewDataPointsErrorForFunctionName:(id)arg1 ;
+(void)raiseDateEarlierThanStartingDateErrorForFunctionName:(id)arg1 ;
+(void)raiseOnlyPositiveOrNegativeErrorForFunctionName:(id)arg1 ;
+(void)raiseReferenceToEmptyCellErrorForFunctionName:(id)arg1 rangeReference:(TSCERangeRef)arg2 ;
+(void)raiseWrongNumberOfArgumentsErrorForFunctionName:(id)arg1 provided:(int)arg2 ;
+(void)raiseTooManyArguments:(id)arg1 maximum:(int)arg2 provided:(int)arg3 ;
+(void)raiseMismatchedUnitsErrorForFunctionName:(id)arg1 ;
+(void)raiseUnitsNotAllowedErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseCurrencyNotAllowedErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(id)sumMixedDurationsAndUnitlessWithoutADateErrorForFunctionName:(id)arg1 ;
+(void)raiseSumMixedDurationsAndUnitlessWithoutADateErrorForFunctionName:(id)arg1 ;
+(void)raiseNotEnoughInputsErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 required:(int)arg3 ;
+(void)raiseInvalidIntersectionError:(vector<TSCEReferenceValue, std::__1::allocator<TSCEReferenceValue> >*)arg1 hostTableUID:(const UUIDData<TSP::UUIDData>*)arg2 calcEngine:(id)arg3 ;
+(void)raiseEmptyArrayError;
+(void)raiseInvalidBaseCharacterErrorForCharacter:(unsigned short)arg1 base:(short)arg2 ;
+(void)raiseInvalidUnitStringError:(id)arg1 ;
+(void)raiseDifferentDimensionsErrorForFunctionName:(id)arg1 ;
+(void)raiseNonMetricUnitPrefixErrorForUnitString:(id)arg1 ;
+(void)raiseConvertOriginUnitMismatchError;
+(void)raiseArrayElementNoDataError;
+(void)raiseDataInvalidDimensionsError;
+(void)raiseDataInvalidLengthError;
+(void)raiseDataInvalidWidthError;
+(void)raiseNegativeReceivedAmountError;
+(void)raiseInvalidMatchModeError;
+(void)raiseMismatchedMaxUnitsError;
+(void)raiseVectorValueNotNumberErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseCharInputOutOfBoundsError;
+(void)raiseDurationDisallowedForNormdistPDFError;
+(void)raiseLinestHighlyCorrelatedVariableError;
+(void)raiseMultipleDurationsErrorForFunctionName:(id)arg1 ;
+(void)raiseLinestMatrixUnderdeterminedError;
+(void)raiseNegativeVectorValueErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raisePercentRankInputOutOfRangeError;
+(void)raisePercentRankExcInputOutOfRangeError;
+(void)raiseLocationServicesNotEnabledError;
+(void)raiseLocationHeadingUnknownError;
+(void)raiseLocationUnknownError;
+(void)raiseLocationUserDeniedError;
+(void)raiseLocationNetworkError;
+(void)raiseLocationHeadingFailureError;
+(void)raiseInvalidLatitudeLongitudeError;
+(void)raiseInvalidAltitudeError;
+(void)raiseInvalidHeadingError;
+(void)raiseInvalidRegexError:(id)arg1 ;
+(void)raiseStringTooLongError;
+(void)raiseUnsupportedFunctionError;
+(void)raiseUnsupportedFeatureError;
+(void)raiseNoConditionIsTrueErrorForFunctionName:(id)arg1 ;
+(void)raiseInvalidLiveStockAttributeError;
+(void)raiseNotAReferenceToAFormulaError;
+(void)raiseInvalidReferenceNameAttributeError;
+(void)raiseInvalidHistoricalStockAttributeError;
+(void)raiseInvalidLiveCurrencyAttributeError;
+(void)raiseInvalidHistoricalCurrencyAttributeError;
+(void)raiseInvalidHistoricalDateError;
+(void)raiseRemoteDataUnavailableErrorWithAttribute:(id)arg1 ;
+(id)noTradingInformationErrorWithNextAvailableDate:(id)arg1 ;
+(id)invalidStockCodeError:(id)arg1 ;
+(id)invalidCurrencyPairError;
+(id)remoteDataServerError;
-(TSCENumberValue*)number;
-(id)string;
-(id)dateValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)date;
-(TSCEReferenceValue*)referenceValue;
-(double)doubleValue;
-(TSCEVector*)vector;
-(id)error;
-(id)stringValue;
-(BOOL)isOfType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)tokenString;
-(BOOL)boolean;
-(id)extraInfo;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)functionName;
-(NSString *)errorType;
-(TSCERangeRef)rangeRef;
-(id)displayStringWithCalculationEngine:(id)arg1 forTable:(const UUIDData<TSP::UUIDData>*)arg2 andCellID:(TSUCellCoord)arg3 ;
-(BOOL)isAbortedError;
-(void)raiseException;
-(void)setErrorDictionary:(id)arg1 ;
-(id)errorDictionary;
-(NSNumber *)argIndex;
-(NSNumber *)argIndex2;
-(NSString *)errorClass;
-(int)nativeType;
-(NSNumber *)debugOnlyErrorNumber;
-(BOOL)isSyntaxError;
-(BOOL)isFromCalcEngine;
-(BOOL)isCircularReferenceError;
-(BOOL)errorIsRangeUsageError;
-(BOOL)isInvalidMergeReference;
-(BOOL)isNotReadyError;
-(BOOL)isUnsupportedFunctionError;
-(BOOL)isUnsupportedFeatureError;
-(BOOL)isErrorReferenceError;
-(BOOL)isInvalidReference;
-(int)deepType;
-(TSCENumberValue*)numberForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(TSCEWarningReportingContext*)arg3 ;
-(id)dateForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(TSCEWarningReportingContext*)arg3 ;
-(id)stringForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(TSCEWarningReportingContext*)arg3 ;
-(BOOL)booleanForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(TSCEWarningReportingContext*)arg3 ;
-(TSCEVector*)formattedVectorForFunction:(id)arg1 argumentIndex:(int)arg2 context:(TSCEEvaluationContextRef)arg3 format:(const TSCEFormat*)arg4 ;
-(TSCEReferenceValue*)referenceValueForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(TSCEWarningReportingContext*)arg3 ;
-(BOOL)isNativelyEqual:(TSCEValue*)arg1 ;
-(id)bakedString;
@end
