//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NEKPBCalendarWrapper, NEKPBDeleteEvent, NEKPBDeletionWrapper, NEKPBICSWrapper, NEKPBSetAlarmSnooze, NEKPBSetParticipantStatus, NEKPBSetReminderComplete, NEKPBSourceWrapper, NEKPBValidationWrapper;

@interface NEKPBProtoBuffMessage : PBCodable <NSCopying>
{
    NEKPBCalendarWrapper *_calendarWrapper;	// 8 = 0x8
    NEKPBDeleteEvent *_deleteEvent;	// 16 = 0x10
    NEKPBDeletionWrapper *_deletionWrapper;	// 24 = 0x18
    NEKPBICSWrapper *_iCSWrapper;	// 32 = 0x20
    unsigned int _packetNumber;	// 40 = 0x28
    NEKPBSetAlarmSnooze *_setAlarmSnooze;	// 48 = 0x30
    NEKPBSetParticipantStatus *_setParticipantStatus;	// 56 = 0x38
    NEKPBSetReminderComplete *_setReminderComplete;	// 64 = 0x40
    NEKPBSourceWrapper *_storeWrapper;	// 72 = 0x48
    NEKPBValidationWrapper *_validationWrapper;	// 80 = 0x50
    struct {
        unsigned int packetNumber:1;
    } _has;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100045750
@property(retain, nonatomic) NEKPBDeleteEvent *deleteEvent; // @synthesize deleteEvent=_deleteEvent;
@property(retain, nonatomic) NEKPBSetAlarmSnooze *setAlarmSnooze; // @synthesize setAlarmSnooze=_setAlarmSnooze;
@property(retain, nonatomic) NEKPBSetParticipantStatus *setParticipantStatus; // @synthesize setParticipantStatus=_setParticipantStatus;
@property(retain, nonatomic) NEKPBSetReminderComplete *setReminderComplete; // @synthesize setReminderComplete=_setReminderComplete;
@property(retain, nonatomic) NEKPBValidationWrapper *validationWrapper; // @synthesize validationWrapper=_validationWrapper;
@property(retain, nonatomic) NEKPBDeletionWrapper *deletionWrapper; // @synthesize deletionWrapper=_deletionWrapper;
@property(retain, nonatomic) NEKPBICSWrapper *iCSWrapper; // @synthesize iCSWrapper=_iCSWrapper;
@property(retain, nonatomic) NEKPBCalendarWrapper *calendarWrapper; // @synthesize calendarWrapper=_calendarWrapper;
@property(retain, nonatomic) NEKPBSourceWrapper *storeWrapper; // @synthesize storeWrapper=_storeWrapper;
@property(nonatomic) unsigned int packetNumber; // @synthesize packetNumber=_packetNumber;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000453ac
- (unsigned long long)hash;	// IMP=0x0000000100045274
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100045038
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100044e44
- (void)copyTo:(id)arg1;	// IMP=0x0000000100044ccc
- (void)writeTo:(id)arg1;	// IMP=0x0000000100044b7c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100044b74
- (id)dictionaryRepresentation;	// IMP=0x00000001000443ac
- (id)description;	// IMP=0x00000001000442f8
@property(readonly, nonatomic) _Bool hasDeleteEvent;
@property(readonly, nonatomic) _Bool hasSetAlarmSnooze;
@property(readonly, nonatomic) _Bool hasSetParticipantStatus;
@property(readonly, nonatomic) _Bool hasSetReminderComplete;
@property(readonly, nonatomic) _Bool hasValidationWrapper;
@property(readonly, nonatomic) _Bool hasDeletionWrapper;
@property(readonly, nonatomic) _Bool hasICSWrapper;
@property(readonly, nonatomic) _Bool hasCalendarWrapper;
@property(readonly, nonatomic) _Bool hasStoreWrapper;
@property(nonatomic) _Bool hasPacketNumber;

@end
