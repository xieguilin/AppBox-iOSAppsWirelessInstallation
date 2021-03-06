///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMMembersDeactivateError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MembersDeactivateError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMMembersDeactivateError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMMembersDeactivateErrorTag` enum type represents the possible tag
/// states with which the `DBTEAMMembersDeactivateError` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMMembersDeactivateErrorTag) {
  /// No matching user found. The provided team_member_id, email, or
  /// external_id does not exist on this team.
  DBTEAMMembersDeactivateErrorUserNotFound,

  /// The user is not a member of the team.
  DBTEAMMembersDeactivateErrorUserNotInTeam,

  /// (no description).
  DBTEAMMembersDeactivateErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMMembersDeactivateErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "user_not_found".
///
/// Description of the "user_not_found" tag state: No matching user found. The
/// provided team_member_id, email, or external_id does not exist on this team.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserNotFound;

///
/// Initializes union class with tag state of "user_not_in_team".
///
/// Description of the "user_not_in_team" tag state: The user is not a member of
/// the team.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserNotInTeam;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "user_not_found".
///
/// @return Whether the union's current tag state has value "user_not_found".
///
- (BOOL)isUserNotFound;

///
/// Retrieves whether the union's current tag state has value
/// "user_not_in_team".
///
/// @return Whether the union's current tag state has value "user_not_in_team".
///
- (BOOL)isUserNotInTeam;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMMembersDeactivateError` union.
///
@interface DBTEAMMembersDeactivateErrorSerializer : NSObject

///
/// Serializes `DBTEAMMembersDeactivateError` instances.
///
/// @param instance An instance of the `DBTEAMMembersDeactivateError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMMembersDeactivateError` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMMembersDeactivateError *)instance;

///
/// Deserializes `DBTEAMMembersDeactivateError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMMembersDeactivateError` API object.
///
/// @return An instantiation of the `DBTEAMMembersDeactivateError` object.
///
+ (DBTEAMMembersDeactivateError *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
