/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKWorkoutResumeData : NSObject <NSSecureCoding> {
    NSMutableArray *_gaps;
    NSUUID *_lastUUID;
    BOOL _lastUUIDInJournal;
}

@property (nonatomic, retain) NSMutableArray *gaps;
@property (nonatomic, retain) NSUUID *lastUUID;
@property (nonatomic) BOOL lastUUIDInJournal;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gaps;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastUUID;
- (BOOL)lastUUIDInJournal;
- (void)setGaps:(id)arg1;
- (void)setLastUUID:(id)arg1;
- (void)setLastUUIDInJournal:(BOOL)arg1;

@end
