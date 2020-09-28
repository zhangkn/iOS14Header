/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString, NSArray;

@interface DEObjectProperty : NSObject {

	ObjectProperty* _This;
	shared_ptr<siri::dialogengine::ObjectProperty>* _ThisShared;

}

@property (assign) shared_ptr<siri::dialogengine::ObjectProperty>* ThisShared;              //@synthesize ThisShared=_ThisShared - In the implementation block
@property (assign) ObjectProperty* This;                                                    //@synthesize This=_This - In the implementation block
@property (readonly) NSString * name; 
@property (readonly) NSString * type; 
@property (readonly) NSString * description; 
@property (readonly) NSArray * sampleValueLocales; 
-(ObjectProperty*)This;
-(void)setThis:(ObjectProperty*)arg1 ;
-(void)setThisShared:(shared_ptr<siri::dialogengine::ObjectProperty>*)arg1 ;
-(shared_ptr<siri::dialogengine::ObjectProperty>*)ThisShared;
-(id)sampleValuesForLocale:(id)arg1 ;
-(NSArray *)sampleValueLocales;
-(id)init;
-(NSString *)type;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::ObjectProperty>*)arg1 ;
-(id)initWithPtr:(ObjectProperty*)arg1 ;
-(NSString *)name;
-(NSString *)description;
@end
