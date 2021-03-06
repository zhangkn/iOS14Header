/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardState, TICandidateRequestToken, TIAutocorrectionList;

@interface TITypologyRecordAutocorrections : TITypologyRecord {

	BOOL _listUIDisplayed;
	TIKeyboardState* _keyboardState;
	TICandidateRequestToken* _requestToken;
	TIAutocorrectionList* _autocorrections;

}

@property (nonatomic,retain) TIKeyboardState * keyboardState;                     //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TICandidateRequestToken * requestToken;              //@synthesize requestToken=_requestToken - In the implementation block
@property (nonatomic,retain) TIAutocorrectionList * autocorrections;              //@synthesize autocorrections=_autocorrections - In the implementation block
@property (assign,nonatomic) BOOL listUIDisplayed;                                //@synthesize listUIDisplayed=_listUIDisplayed - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)replaceDocumentState:(id)arg1 ;
-(void)removeContextFromKeyboardState;
-(TICandidateRequestToken *)requestToken;
-(void)setRequestToken:(TICandidateRequestToken *)arg1 ;
-(TIAutocorrectionList *)autocorrections;
-(void)setAutocorrections:(TIAutocorrectionList *)arg1 ;
-(BOOL)listUIDisplayed;
-(void)setListUIDisplayed:(BOOL)arg1 ;
-(id)currentKeyboardState;
-(id)shortDescription;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(TIKeyboardState *)keyboardState;
-(void)applyToStatistic:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

