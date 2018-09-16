create table connect_session (
  sid varchar NOT NULL,
  expires timestamp without time zone NOT NULL,
  session json NOT NULL,
  constraint sid_pk primary key (sid)
);
