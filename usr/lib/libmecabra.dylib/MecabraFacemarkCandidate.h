/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:56 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MecabraFacemarkCandidate : NSObject {

	NSString* _string;
	NSString* _category;

}

@property (nonatomic,readonly) NSString * string;                //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSString * category;              //@synthesize category=_category - In the implementation block
+(id)copyFacemarkCandidatesForLocale:(id)arg1 ;
+(id)copyFacemarkCandidatesForLanguage:(int)arg1 ;
+(id)candidateWithString:(id)arg1 category:(id)arg2 ;
-(NSString *)string;
-(void)dealloc;
-(NSString *)category;
-(id)surface;
-(id)description;
-(id)initWithString:(id)arg1 category:(id)arg2 ;
@end

