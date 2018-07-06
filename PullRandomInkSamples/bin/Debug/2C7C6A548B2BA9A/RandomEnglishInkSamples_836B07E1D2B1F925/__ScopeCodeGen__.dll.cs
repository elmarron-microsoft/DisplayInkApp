﻿using Microsoft.Analytics.Interfaces;
using System;
using System.Collections.Generic;
using System.Text;
using System.Reflection;
using System.IO;
using System.Text.RegularExpressions;
using System.Threading;
using System.Runtime.Serialization;
using System.Linq;
using Microsoft.SCOPE.Types;
using ScopeRuntime;
using Microsoft.SegmentRelevance.ScopeLib;
using System.Runtime.Versioning;
[assembly:TargetFramework(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")]

public class ___Scope_Generated_Classes___
{
	public static int __RuntimeVersion__ = 0;
	public static int __WriteSStreamVersion__ = 3;
	public static bool __BondIntermediates__ = false;
	private delegate ColumnData ColumnDataCtor();
#region ==BEGIN USER CODE==
#endregion ==END USER CODE==

	public class Row_RowGuid_Guid_InputLanguage_String_RecognizedText_String_InkIsf_String : Row
	{
		private static readonly System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>[] _columnTable = 
		{
			new System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>("RowGuid", ColumnDataType.Guid, typeof(System.Guid), null),
			new System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>("InputLanguage", ColumnDataType.String, typeof(System.String), null),
			new System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>("RecognizedText", ColumnDataType.String, typeof(System.String), null),
			new System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>("InkIsf", ColumnDataType.String, typeof(System.String), null),
		};
		ScopeRuntime.GuidColumnData s0_RowGuid;
		public ScopeRuntime.GuidColumnData RowGuid
		{
			get { return s0_RowGuid; }
			set
			{
				s0_RowGuid = value;
				_columns[0] = value;
			}
		}
		ScopeRuntime.StringColumnData s0_InputLanguage;
		public ScopeRuntime.StringColumnData InputLanguage
		{
			get { return s0_InputLanguage; }
			set
			{
				s0_InputLanguage = value;
				_columns[1] = value;
			}
		}
		ScopeRuntime.StringColumnData s0_RecognizedText;
		public ScopeRuntime.StringColumnData RecognizedText
		{
			get { return s0_RecognizedText; }
			set
			{
				s0_RecognizedText = value;
				_columns[2] = value;
			}
		}
		ScopeRuntime.StringColumnData s0_InkIsf;
		public ScopeRuntime.StringColumnData InkIsf
		{
			get { return s0_InkIsf; }
			set
			{
				s0_InkIsf = value;
				_columns[3] = value;
			}
		}
		public Row_RowGuid_Guid_InputLanguage_String_RecognizedText_String_InkIsf_String(Schema schema, ColumnData[] columns) : base(schema, columns) { }
		public Row_RowGuid_Guid_InputLanguage_String_RecognizedText_String_InkIsf_String(Schema schema) : base(schema)
		{
			for (int i = 0; i < _columns.Length; ++i)
			{
				this[i] = _columns[i];
			}
		}
		public Row_RowGuid_Guid_InputLanguage_String_RecognizedText_String_InkIsf_String() : base(BuildSchema(), BuildColumnData())
		{
			for (int i = 0; i < _columns.Length; ++i)
			{
				this[i] = _columns[i];
			}
		}
		private static Schema BuildSchema()
		{
			Schema schema = new Schema();
			for (int i = 0; i < _columnTable.Length; ++i)
			{
				schema.Add(new ScopeRuntime.ColumnInfo(_columnTable[i].Item1, _columnTable[i].Item3));
			}
			return schema;
		}
		private static ColumnData[] BuildColumnData()
		{
			ColumnData[] columnData = new ColumnData[_columnTable.Length];
			for (int i = 0; i < _columnTable.Length; ++i)
			{
				columnData[i] = _columnTable[i].Item4 != null ? _columnTable[i].Item4() : ColumnDataFactory.Create(_columnTable[i].Item2);
			}
			return columnData;
		}
		public override ColumnData this[int index]
		{
			get { return _columns[index]; }
			set
			{
				_columns[index] = value;

				//  We also need to reset the property
				switch (index)
				{
					case 0:
						s0_RowGuid = (ScopeRuntime.GuidColumnData)value;
						break;
					case 1:
						s0_InputLanguage = (ScopeRuntime.StringColumnData)value;
						break;
					case 2:
						s0_RecognizedText = (ScopeRuntime.StringColumnData)value;
						break;
					case 3:
						s0_InkIsf = (ScopeRuntime.StringColumnData)value;
						break;
				}
			}
		}
		public override void Serialize(BinaryWriter writer)
		{
			byte[] ___masking___ = new byte[1];
			___masking___[0] = 1;

			bool hasNull = false;
			if (s0_InputLanguage.IsNull())
			{
				hasNull = true;
				___masking___[0] |= (byte)(1 << 1);
			}
			if (s0_RecognizedText.IsNull())
			{
				hasNull = true;
				___masking___[0] |= (byte)(1 << 2);
			}
			if (s0_InkIsf.IsNull())
			{
				hasNull = true;
				___masking___[0] |= (byte)(1 << 3);
			}
			if (hasNull)
			{
				writer.Write(___masking___[0]);
			}
			else
			{
				writer.Write( (byte) 0);
			}
			s0_RowGuid.Serialize(writer);
			if (!s0_InputLanguage.IsNull())
			{
				s0_InputLanguage.Serialize(writer);
			}
			if (!s0_RecognizedText.IsNull())
			{
				s0_RecognizedText.Serialize(writer);
			}
			if (!s0_InkIsf.IsNull())
			{
				s0_InkIsf.Serialize(writer);
			}
		}

		public override void Deserialize(BinaryReader reader)
		{
			byte[] ___masking___ = new byte[1];
			byte firstByte = reader.ReadByte();
			if (firstByte == 0)
			{
				s0_RowGuid.Deserialize(reader);
				s0_InputLanguage.Deserialize(reader);
				s0_RecognizedText.Deserialize(reader);
				s0_InkIsf.Deserialize(reader);
			}
			else
			{
				___masking___[0] = firstByte;
				s0_RowGuid.Deserialize(reader);
				if ((___masking___[0] & 2) != 2)
				{
					s0_InputLanguage.Deserialize(reader);
				}
				else
				{
					s0_InputLanguage.SetNull();
				}
				if ((___masking___[0] & 4) != 4)
				{
					s0_RecognizedText.Deserialize(reader);
				}
				else
				{
					s0_RecognizedText.SetNull();
				}
				if ((___masking___[0] & 8) != 8)
				{
					s0_InkIsf.Deserialize(reader);
				}
				else
				{
					s0_InkIsf.SetNull();
				}
			}
		}
	}


	public class Row_RowGuid_Guid_RecognizedText_String_InkIsf_String : Row
	{
		private static readonly System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>[] _columnTable = 
		{
			new System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>("RowGuid", ColumnDataType.Guid, typeof(System.Guid), null),
			new System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>("RecognizedText", ColumnDataType.String, typeof(System.String), null),
			new System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>("InkIsf", ColumnDataType.String, typeof(System.String), null),
		};
		ScopeRuntime.GuidColumnData s0_RowGuid;
		public ScopeRuntime.GuidColumnData RowGuid
		{
			get { return s0_RowGuid; }
			set
			{
				s0_RowGuid = value;
				_columns[0] = value;
			}
		}
		ScopeRuntime.StringColumnData s0_RecognizedText;
		public ScopeRuntime.StringColumnData RecognizedText
		{
			get { return s0_RecognizedText; }
			set
			{
				s0_RecognizedText = value;
				_columns[1] = value;
			}
		}
		ScopeRuntime.StringColumnData s0_InkIsf;
		public ScopeRuntime.StringColumnData InkIsf
		{
			get { return s0_InkIsf; }
			set
			{
				s0_InkIsf = value;
				_columns[2] = value;
			}
		}
		public Row_RowGuid_Guid_RecognizedText_String_InkIsf_String(Schema schema, ColumnData[] columns) : base(schema, columns) { }
		public Row_RowGuid_Guid_RecognizedText_String_InkIsf_String(Schema schema) : base(schema)
		{
			for (int i = 0; i < _columns.Length; ++i)
			{
				this[i] = _columns[i];
			}
		}
		public Row_RowGuid_Guid_RecognizedText_String_InkIsf_String() : base(BuildSchema(), BuildColumnData())
		{
			for (int i = 0; i < _columns.Length; ++i)
			{
				this[i] = _columns[i];
			}
		}
		private static Schema BuildSchema()
		{
			Schema schema = new Schema();
			for (int i = 0; i < _columnTable.Length; ++i)
			{
				schema.Add(new ScopeRuntime.ColumnInfo(_columnTable[i].Item1, _columnTable[i].Item3));
			}
			return schema;
		}
		private static ColumnData[] BuildColumnData()
		{
			ColumnData[] columnData = new ColumnData[_columnTable.Length];
			for (int i = 0; i < _columnTable.Length; ++i)
			{
				columnData[i] = _columnTable[i].Item4 != null ? _columnTable[i].Item4() : ColumnDataFactory.Create(_columnTable[i].Item2);
			}
			return columnData;
		}
		public override ColumnData this[int index]
		{
			get { return _columns[index]; }
			set
			{
				_columns[index] = value;

				//  We also need to reset the property
				switch (index)
				{
					case 0:
						s0_RowGuid = (ScopeRuntime.GuidColumnData)value;
						break;
					case 1:
						s0_RecognizedText = (ScopeRuntime.StringColumnData)value;
						break;
					case 2:
						s0_InkIsf = (ScopeRuntime.StringColumnData)value;
						break;
				}
			}
		}
		public override void Serialize(BinaryWriter writer)
		{
			byte[] ___masking___ = new byte[1];
			___masking___[0] = 1;

			bool hasNull = false;
			if (s0_RecognizedText.IsNull())
			{
				hasNull = true;
				___masking___[0] |= (byte)(1 << 1);
			}
			if (s0_InkIsf.IsNull())
			{
				hasNull = true;
				___masking___[0] |= (byte)(1 << 2);
			}
			if (hasNull)
			{
				writer.Write(___masking___[0]);
			}
			else
			{
				writer.Write( (byte) 0);
			}
			s0_RowGuid.Serialize(writer);
			if (!s0_RecognizedText.IsNull())
			{
				s0_RecognizedText.Serialize(writer);
			}
			if (!s0_InkIsf.IsNull())
			{
				s0_InkIsf.Serialize(writer);
			}
		}

		public override void Deserialize(BinaryReader reader)
		{
			byte[] ___masking___ = new byte[1];
			byte firstByte = reader.ReadByte();
			if (firstByte == 0)
			{
				s0_RowGuid.Deserialize(reader);
				s0_RecognizedText.Deserialize(reader);
				s0_InkIsf.Deserialize(reader);
			}
			else
			{
				___masking___[0] = firstByte;
				s0_RowGuid.Deserialize(reader);
				if ((___masking___[0] & 2) != 2)
				{
					s0_RecognizedText.Deserialize(reader);
				}
				else
				{
					s0_RecognizedText.SetNull();
				}
				if ((___masking___[0] & 4) != 4)
				{
					s0_InkIsf.Deserialize(reader);
				}
				else
				{
					s0_InkIsf.SetNull();
				}
			}
		}
	}

	public class ScopeOptimizedClass_1 : ConcurrentOrderPreservingProcessor<Microsoft.SegmentRelevance.ScopeLib.ColumnProcessor,Row_RowGuid_Guid_RecognizedText_String_InkIsf_String,Row_RowGuid_Guid_RecognizedText_String_InkIsf_String>
	{
		public ScopeOptimizedClass_1() : base(false)
		{
			/* run concurrently */
		}
		public ScopeOptimizedClass_1(int totalConcurrentProcessors) : base(false, totalConcurrentProcessors)
		{
			/* run concurrently */
		}
		public ScopeOptimizedClass_1(int totalConcurrentProcessors, int? workerCount, int? initialUnitSize, ulong? managedMemoryLimit) : base(false, totalConcurrentProcessors, workerCount, initialUnitSize, managedMemoryLimit)
		{
			/* run concurrently */
		}
		protected override Microsoft.SegmentRelevance.ScopeLib.ColumnProcessor CreateProcessor()
		{
			return new Microsoft.SegmentRelevance.ScopeLib.ColumnProcessor();
		}
	}


	public class Row_68CD688C73770774 : Row
	{
		private static readonly System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>[] _columnTable = 
		{
			new System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>("RecoLength", ColumnDataType.Integer, typeof(System.Int32), null),
			new System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>("Weight", ColumnDataType.Double, typeof(System.Double), null),
			new System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>("RowGuid", ColumnDataType.Guid, typeof(System.Guid), null),
			new System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>("RecognizedText", ColumnDataType.String, typeof(System.String), null),
			new System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>("InkIsf", ColumnDataType.String, typeof(System.String), null),
		};
		ScopeRuntime.IntegerColumnData s0_RecoLength;
		public ScopeRuntime.IntegerColumnData RecoLength
		{
			get { return s0_RecoLength; }
			set
			{
				s0_RecoLength = value;
				_columns[0] = value;
			}
		}
		ScopeRuntime.DoubleColumnData s0_Weight;
		public ScopeRuntime.DoubleColumnData Weight
		{
			get { return s0_Weight; }
			set
			{
				s0_Weight = value;
				_columns[1] = value;
			}
		}
		ScopeRuntime.GuidColumnData s0_RowGuid;
		public ScopeRuntime.GuidColumnData RowGuid
		{
			get { return s0_RowGuid; }
			set
			{
				s0_RowGuid = value;
				_columns[2] = value;
			}
		}
		ScopeRuntime.StringColumnData s0_RecognizedText;
		public ScopeRuntime.StringColumnData RecognizedText
		{
			get { return s0_RecognizedText; }
			set
			{
				s0_RecognizedText = value;
				_columns[3] = value;
			}
		}
		ScopeRuntime.StringColumnData s0_InkIsf;
		public ScopeRuntime.StringColumnData InkIsf
		{
			get { return s0_InkIsf; }
			set
			{
				s0_InkIsf = value;
				_columns[4] = value;
			}
		}
		public Row_68CD688C73770774(Schema schema, ColumnData[] columns) : base(schema, columns) { }
		public Row_68CD688C73770774(Schema schema) : base(schema)
		{
			for (int i = 0; i < _columns.Length; ++i)
			{
				this[i] = _columns[i];
			}
		}
		public Row_68CD688C73770774() : base(BuildSchema(), BuildColumnData())
		{
			for (int i = 0; i < _columns.Length; ++i)
			{
				this[i] = _columns[i];
			}
		}
		private static Schema BuildSchema()
		{
			Schema schema = new Schema();
			for (int i = 0; i < _columnTable.Length; ++i)
			{
				schema.Add(new ScopeRuntime.ColumnInfo(_columnTable[i].Item1, _columnTable[i].Item3));
			}
			return schema;
		}
		private static ColumnData[] BuildColumnData()
		{
			ColumnData[] columnData = new ColumnData[_columnTable.Length];
			for (int i = 0; i < _columnTable.Length; ++i)
			{
				columnData[i] = _columnTable[i].Item4 != null ? _columnTable[i].Item4() : ColumnDataFactory.Create(_columnTable[i].Item2);
			}
			return columnData;
		}
		public override ColumnData this[int index]
		{
			get { return _columns[index]; }
			set
			{
				_columns[index] = value;

				//  We also need to reset the property
				switch (index)
				{
					case 0:
						s0_RecoLength = (ScopeRuntime.IntegerColumnData)value;
						break;
					case 1:
						s0_Weight = (ScopeRuntime.DoubleColumnData)value;
						break;
					case 2:
						s0_RowGuid = (ScopeRuntime.GuidColumnData)value;
						break;
					case 3:
						s0_RecognizedText = (ScopeRuntime.StringColumnData)value;
						break;
					case 4:
						s0_InkIsf = (ScopeRuntime.StringColumnData)value;
						break;
				}
			}
		}
		public override void Serialize(BinaryWriter writer)
		{
			byte[] ___masking___ = new byte[1];
			___masking___[0] = 1;

			bool hasNull = false;
			if (s0_RecognizedText.IsNull())
			{
				hasNull = true;
				___masking___[0] |= (byte)(1 << 1);
			}
			if (s0_InkIsf.IsNull())
			{
				hasNull = true;
				___masking___[0] |= (byte)(1 << 2);
			}
			if (hasNull)
			{
				writer.Write(___masking___[0]);
			}
			else
			{
				writer.Write( (byte) 0);
			}
			s0_RecoLength.Serialize(writer);
			s0_Weight.Serialize(writer);
			s0_RowGuid.Serialize(writer);
			if (!s0_RecognizedText.IsNull())
			{
				s0_RecognizedText.Serialize(writer);
			}
			if (!s0_InkIsf.IsNull())
			{
				s0_InkIsf.Serialize(writer);
			}
		}

		public override void Deserialize(BinaryReader reader)
		{
			byte[] ___masking___ = new byte[1];
			byte firstByte = reader.ReadByte();
			if (firstByte == 0)
			{
				s0_RecoLength.Deserialize(reader);
				s0_Weight.Deserialize(reader);
				s0_RowGuid.Deserialize(reader);
				s0_RecognizedText.Deserialize(reader);
				s0_InkIsf.Deserialize(reader);
			}
			else
			{
				___masking___[0] = firstByte;
				s0_RecoLength.Deserialize(reader);
				s0_Weight.Deserialize(reader);
				s0_RowGuid.Deserialize(reader);
				if ((___masking___[0] & 2) != 2)
				{
					s0_RecognizedText.Deserialize(reader);
				}
				else
				{
					s0_RecognizedText.SetNull();
				}
				if ((___masking___[0] & 4) != 4)
				{
					s0_InkIsf.Deserialize(reader);
				}
				else
				{
					s0_InkIsf.SetNull();
				}
			}
		}
	}


	public class Row_193825B98C8C2D67 : Row
	{
		private static readonly System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>[] _columnTable = 
		{
			new System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>("RowGuid", ColumnDataType.Guid, typeof(System.Guid), null),
			new System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>("RecognizedText", ColumnDataType.String, typeof(System.String), null),
			new System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>("RecoLength", ColumnDataType.Integer, typeof(System.Int32), null),
			new System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>("InkIsf", ColumnDataType.String, typeof(System.String), null),
			new System.Tuple<string,ColumnDataType,Type,ColumnDataCtor>("Weight", ColumnDataType.Double, typeof(System.Double), null),
		};
		ScopeRuntime.GuidColumnData s0_RowGuid;
		public ScopeRuntime.GuidColumnData RowGuid
		{
			get { return s0_RowGuid; }
			set
			{
				s0_RowGuid = value;
				_columns[0] = value;
			}
		}
		ScopeRuntime.StringColumnData s0_RecognizedText;
		public ScopeRuntime.StringColumnData RecognizedText
		{
			get { return s0_RecognizedText; }
			set
			{
				s0_RecognizedText = value;
				_columns[1] = value;
			}
		}
		ScopeRuntime.IntegerColumnData s0_RecoLength;
		public ScopeRuntime.IntegerColumnData RecoLength
		{
			get { return s0_RecoLength; }
			set
			{
				s0_RecoLength = value;
				_columns[2] = value;
			}
		}
		ScopeRuntime.StringColumnData s0_InkIsf;
		public ScopeRuntime.StringColumnData InkIsf
		{
			get { return s0_InkIsf; }
			set
			{
				s0_InkIsf = value;
				_columns[3] = value;
			}
		}
		ScopeRuntime.DoubleColumnData s0_Weight;
		public ScopeRuntime.DoubleColumnData Weight
		{
			get { return s0_Weight; }
			set
			{
				s0_Weight = value;
				_columns[4] = value;
			}
		}
		public Row_193825B98C8C2D67(Schema schema, ColumnData[] columns) : base(schema, columns) { }
		public Row_193825B98C8C2D67(Schema schema) : base(schema)
		{
			for (int i = 0; i < _columns.Length; ++i)
			{
				this[i] = _columns[i];
			}
		}
		public Row_193825B98C8C2D67() : base(BuildSchema(), BuildColumnData())
		{
			for (int i = 0; i < _columns.Length; ++i)
			{
				this[i] = _columns[i];
			}
		}
		private static Schema BuildSchema()
		{
			Schema schema = new Schema();
			for (int i = 0; i < _columnTable.Length; ++i)
			{
				schema.Add(new ScopeRuntime.ColumnInfo(_columnTable[i].Item1, _columnTable[i].Item3));
			}
			return schema;
		}
		private static ColumnData[] BuildColumnData()
		{
			ColumnData[] columnData = new ColumnData[_columnTable.Length];
			for (int i = 0; i < _columnTable.Length; ++i)
			{
				columnData[i] = _columnTable[i].Item4 != null ? _columnTable[i].Item4() : ColumnDataFactory.Create(_columnTable[i].Item2);
			}
			return columnData;
		}
		public override ColumnData this[int index]
		{
			get { return _columns[index]; }
			set
			{
				_columns[index] = value;

				//  We also need to reset the property
				switch (index)
				{
					case 0:
						s0_RowGuid = (ScopeRuntime.GuidColumnData)value;
						break;
					case 1:
						s0_RecognizedText = (ScopeRuntime.StringColumnData)value;
						break;
					case 2:
						s0_RecoLength = (ScopeRuntime.IntegerColumnData)value;
						break;
					case 3:
						s0_InkIsf = (ScopeRuntime.StringColumnData)value;
						break;
					case 4:
						s0_Weight = (ScopeRuntime.DoubleColumnData)value;
						break;
				}
			}
		}
		public override void Serialize(BinaryWriter writer)
		{
			byte[] ___masking___ = new byte[1];
			___masking___[0] = 1;

			bool hasNull = false;
			if (s0_RecognizedText.IsNull())
			{
				hasNull = true;
				___masking___[0] |= (byte)(1 << 1);
			}
			if (s0_InkIsf.IsNull())
			{
				hasNull = true;
				___masking___[0] |= (byte)(1 << 2);
			}
			if (hasNull)
			{
				writer.Write(___masking___[0]);
			}
			else
			{
				writer.Write( (byte) 0);
			}
			s0_RowGuid.Serialize(writer);
			if (!s0_RecognizedText.IsNull())
			{
				s0_RecognizedText.Serialize(writer);
			}
			s0_RecoLength.Serialize(writer);
			if (!s0_InkIsf.IsNull())
			{
				s0_InkIsf.Serialize(writer);
			}
			s0_Weight.Serialize(writer);
		}

		public override void Deserialize(BinaryReader reader)
		{
			byte[] ___masking___ = new byte[1];
			byte firstByte = reader.ReadByte();
			if (firstByte == 0)
			{
				s0_RowGuid.Deserialize(reader);
				s0_RecognizedText.Deserialize(reader);
				s0_RecoLength.Deserialize(reader);
				s0_InkIsf.Deserialize(reader);
				s0_Weight.Deserialize(reader);
			}
			else
			{
				___masking___[0] = firstByte;
				s0_RowGuid.Deserialize(reader);
				if ((___masking___[0] & 2) != 2)
				{
					s0_RecognizedText.Deserialize(reader);
				}
				else
				{
					s0_RecognizedText.SetNull();
				}
				s0_RecoLength.Deserialize(reader);
				if ((___masking___[0] & 4) != 4)
				{
					s0_InkIsf.Deserialize(reader);
				}
				else
				{
					s0_InkIsf.SetNull();
				}
				s0_Weight.Deserialize(reader);
			}
		}
	}


	public class ScopeRowComparer_1 : IRowComparer
	{
		bool _isInitializedAlready = false;
		Guid _RowGuid;
		#region IRowComparer Members

		public bool IsSameAsPrevious(Row inputRow)
		{
			if (!_isInitializedAlready)
			{
				_isInitializedAlready = true;
				return false;
			}
			Row_193825B98C8C2D67 row = (Row_193825B98C8C2D67)inputRow;
			if (ColumnDataComparer.Compare(row.RowGuid.Guid, _RowGuid) != 0)
			{
				return false;
			}

			return true;
		}

		public bool SetKey(Row inputRow)
		{
			if (inputRow == null)
			{
				return false;
			}
			else if (!IsSameAsPrevious(inputRow))
			{
				Row_193825B98C8C2D67 row = (Row_193825B98C8C2D67)inputRow;
				_RowGuid = row.RowGuid.Guid;
				return true;
			}
			else
			{
				return false;
			}
		}

		#endregion
	}
	[ScopeAnnotation(@"OriginalClassName",@"Microsoft.SegmentRelevance.ScopeLib.TopNReducer")]
	[ScopeAnnotation(@"OriginalAssemblyName",@"Relevance.ScopeLib.dll")]
	public class ScopeReducer_1 : ScopeRuntime.Processor
	{
		public override IEnumerable<Row> Process(RowSet upstream, Row outputRow, string[] args)
		{
			var reducer = new Microsoft.SegmentRelevance.ScopeLib.TopNReducer();
			reducer.Initialize(upstream.Schema, outputRow.Schema, args);
			IEnumerator<Row> enumerator = upstream.Rows.GetEnumerator();
			ScopeRowComparer_1 comparer = new ScopeRowComparer_1();
			KeyEnumerator<Row_193825B98C8C2D67> key = new KeyEnumerator<Row_193825B98C8C2D67>();
			key.Initialize(enumerator, comparer, upstream.Schema);
			if (enumerator.MoveNext())
			{
				while (!key.IsDone && comparer.SetKey(enumerator.Current))
				{
					foreach (Row row in reducer.Reduce(key, outputRow, args))
					{
						yield return row;
					}
					key.Drain();
				}
			}
		}
	}

	public class ScopeOptimizedClass_2 : ConcurrentOrderPreservingProcessor<Microsoft.SegmentRelevance.ScopeLib.ColumnProcessor,Row_RowGuid_Guid_RecognizedText_String_InkIsf_String,Row_RowGuid_Guid_RecognizedText_String_InkIsf_String>
	{
		public ScopeOptimizedClass_2() : base(false)
		{
			/* run concurrently */
		}
		public ScopeOptimizedClass_2(int totalConcurrentProcessors) : base(false, totalConcurrentProcessors)
		{
			/* run concurrently */
		}
		public ScopeOptimizedClass_2(int totalConcurrentProcessors, int? workerCount, int? initialUnitSize, ulong? managedMemoryLimit) : base(false, totalConcurrentProcessors, workerCount, initialUnitSize, managedMemoryLimit)
		{
			/* run concurrently */
		}
		protected override Microsoft.SegmentRelevance.ScopeLib.ColumnProcessor CreateProcessor()
		{
			return new Microsoft.SegmentRelevance.ScopeLib.ColumnProcessor();
		}
	}

	public class ScopeOptimizedClass_3 : ConcurrentOrderPreservingProcessor<Microsoft.SegmentRelevance.ScopeLib.ColumnProcessor,Row_RowGuid_Guid_RecognizedText_String_InkIsf_String,Row_RowGuid_Guid_RecognizedText_String_InkIsf_String>
	{
		public ScopeOptimizedClass_3() : base(false)
		{
			/* run concurrently */
		}
		public ScopeOptimizedClass_3(int totalConcurrentProcessors) : base(false, totalConcurrentProcessors)
		{
			/* run concurrently */
		}
		public ScopeOptimizedClass_3(int totalConcurrentProcessors, int? workerCount, int? initialUnitSize, ulong? managedMemoryLimit) : base(false, totalConcurrentProcessors, workerCount, initialUnitSize, managedMemoryLimit)
		{
			/* run concurrently */
		}
		protected override Microsoft.SegmentRelevance.ScopeLib.ColumnProcessor CreateProcessor()
		{
			return new Microsoft.SegmentRelevance.ScopeLib.ColumnProcessor();
		}
	}

	public class ScopeOptimizedClass_4 : ConcurrentOrderPreservingProcessor<Microsoft.SegmentRelevance.ScopeLib.ColumnProcessor,Row_RowGuid_Guid_RecognizedText_String_InkIsf_String,Row_RowGuid_Guid_RecognizedText_String_InkIsf_String>
	{
		public ScopeOptimizedClass_4() : base(false)
		{
			/* run concurrently */
		}
		public ScopeOptimizedClass_4(int totalConcurrentProcessors) : base(false, totalConcurrentProcessors)
		{
			/* run concurrently */
		}
		public ScopeOptimizedClass_4(int totalConcurrentProcessors, int? workerCount, int? initialUnitSize, ulong? managedMemoryLimit) : base(false, totalConcurrentProcessors, workerCount, initialUnitSize, managedMemoryLimit)
		{
			/* run concurrently */
		}
		protected override Microsoft.SegmentRelevance.ScopeLib.ColumnProcessor CreateProcessor()
		{
			return new Microsoft.SegmentRelevance.ScopeLib.ColumnProcessor();
		}
	}

	public class ScopeOptimizedClass_5 : ConcurrentOrderPreservingProcessor<Microsoft.SegmentRelevance.ScopeLib.ColumnProcessor,Row_RowGuid_Guid_RecognizedText_String_InkIsf_String,Row_RowGuid_Guid_RecognizedText_String_InkIsf_String>
	{
		public ScopeOptimizedClass_5() : base(false)
		{
			/* run concurrently */
		}
		public ScopeOptimizedClass_5(int totalConcurrentProcessors) : base(false, totalConcurrentProcessors)
		{
			/* run concurrently */
		}
		public ScopeOptimizedClass_5(int totalConcurrentProcessors, int? workerCount, int? initialUnitSize, ulong? managedMemoryLimit) : base(false, totalConcurrentProcessors, workerCount, initialUnitSize, managedMemoryLimit)
		{
			/* run concurrently */
		}
		protected override Microsoft.SegmentRelevance.ScopeLib.ColumnProcessor CreateProcessor()
		{
			return new Microsoft.SegmentRelevance.ScopeLib.ColumnProcessor();
		}
	}


	public static System.Type[] __UdtTypeTable__ =
	{
		
	};

	public static class __OperatorFactory__
	{
		public static ScopeRuntime.Processor Create_Process_3()
		{
			return new ___Scope_Generated_Classes___.ScopeOptimizedClass_1(1, null, null, null);
		}
		public static string Name_Process_3 = "___Scope_Generated_Classes___.ScopeOptimizedClass_1";
		public static ScopeRuntime.Reducer Create_Process_5()
		{
			return new Microsoft.SegmentRelevance.ScopeLib.TopNReducer();
		}
		public static string Name_Process_5 = "___Scope_Generated_Classes___.ScopeReducer_1";
		public static ScopeRuntime.Processor Create_Process_8()
		{
			return new ___Scope_Generated_Classes___.ScopeOptimizedClass_2(1, null, null, null);
		}
		public static string Name_Process_8 = "___Scope_Generated_Classes___.ScopeOptimizedClass_2";
		public static ScopeRuntime.Reducer Create_Process_11()
		{
			return new Microsoft.SegmentRelevance.ScopeLib.TopNReducer();
		}
		public static string Name_Process_11 = "___Scope_Generated_Classes___.ScopeReducer_1";
		public static ScopeRuntime.Processor Create_Process_14()
		{
			return new ___Scope_Generated_Classes___.ScopeOptimizedClass_3(1, null, null, null);
		}
		public static string Name_Process_14 = "___Scope_Generated_Classes___.ScopeOptimizedClass_3";
		public static ScopeRuntime.Reducer Create_Process_17()
		{
			return new Microsoft.SegmentRelevance.ScopeLib.TopNReducer();
		}
		public static string Name_Process_17 = "___Scope_Generated_Classes___.ScopeReducer_1";
		public static ScopeRuntime.Processor Create_Process_21()
		{
			return new ___Scope_Generated_Classes___.ScopeOptimizedClass_4(1, null, null, null);
		}
		public static string Name_Process_21 = "___Scope_Generated_Classes___.ScopeOptimizedClass_4";
		public static ScopeRuntime.Reducer Create_Process_23()
		{
			return new Microsoft.SegmentRelevance.ScopeLib.TopNReducer();
		}
		public static string Name_Process_23 = "___Scope_Generated_Classes___.ScopeReducer_1";
		public static ScopeRuntime.Processor Create_Process_26()
		{
			return new ___Scope_Generated_Classes___.ScopeOptimizedClass_5(1, null, null, null);
		}
		public static string Name_Process_26 = "___Scope_Generated_Classes___.ScopeOptimizedClass_5";
		public static ScopeRuntime.Reducer Create_Process_29()
		{
			return new Microsoft.SegmentRelevance.ScopeLib.TopNReducer();
		}
		public static string Name_Process_29 = "___Scope_Generated_Classes___.ScopeReducer_1";
		public static ScopeRuntime.Reducer Create_Process_31()
		{
			return new Microsoft.SegmentRelevance.ScopeLib.TopNReducer();
		}
		public static string Name_Process_31 = "___Scope_Generated_Classes___.ScopeReducer_1";
	}
}

	static public class UDTExtensionWrapper
	{
                public static T Create<T>() where T : new() 
                { 
                    return new T(); 
                }

                private static readonly System.Collections.Generic.Dictionary<System.Collections.Generic.IEqualityComparer<string>, byte> StringComparerToByteMap =
                    new System.Collections.Generic.Dictionary<System.Collections.Generic.IEqualityComparer<string>, byte>()
                    {
                        {System.Collections.Generic.EqualityComparer<string>.Default, 0},
                        {System.StringComparer.CurrentCulture, 1},
                        {System.StringComparer.CurrentCultureIgnoreCase, 2},
                        {System.StringComparer.InvariantCulture, 3},
                        {System.StringComparer.InvariantCultureIgnoreCase, 4},
                        {System.StringComparer.Ordinal, 5},
                        {System.StringComparer.OrdinalIgnoreCase, 6},
                    };

                private static readonly System.Collections.Generic.Dictionary<byte, System.Collections.Generic.IEqualityComparer<string>> ByteToStringComparerMap =
                    System.Linq.Enumerable.ToDictionary(StringComparerToByteMap, kvp => kvp.Value, kvp => kvp.Key);

                public static void Read(BinaryValueReader reader, out System.StringComparer value)
                {
                    byte comparerKey;
                    reader.Read(out comparerKey);
                    value = ByteToStringComparerMap[comparerKey] as System.StringComparer;
                }

                public static void Write(BinaryValueWriter writer, System.StringComparer value)
                {
                    // If System.StringComparer is not one of the 6 we recognize, comparerKey should be 0.
                    byte comparerKey;
                    StringComparerToByteMap.TryGetValue(value as System.Collections.Generic.IEqualityComparer<string> ?? System.Collections.Generic.EqualityComparer<string>.Default, out comparerKey);
                    writer.Write(comparerKey);
                }

                static public ScopeStruct       ScopeClone(this ScopeStruct value, ReferenceHashTable<object> seenObject)
                {
                    return (ScopeStruct)new StructColumnData(value).Clone().Value;
                }

                static public ScopeMap<K,V>     ScopeClone<K,V>(this ScopeMap<K,V> value, ReferenceHashTable<object> seenObject)
                {
                    return (ScopeMap<K,V>)new MapColumnData<K,V>(value).Clone().Value;
                }

                static public ScopeArray<T>     ScopeClone<T>(this ScopeArray<T> value, ReferenceHashTable<object> seenObject)
                {
                    return (ScopeArray<T>)new ArrayColumnData<T>(value).Clone().Value;
                }

                static public void Write<T>(BinaryValueWriter writer, ScopeArray<T> v)
                {
                    writer.Write(v);
                }

                static public void Read<T>(BinaryValueReader reader, out ScopeArray<T> v)
                {
                    reader.Read(out v);
                } 

                static public void Write<K,V>(BinaryValueWriter writer, ScopeMap<K,V> v)
                {
                    writer.Write(v);
                }

                static public void Read<K,V>(BinaryValueReader reader, out ScopeMap<K,V> v)
                {
                    reader.Read(out v);
                }                 
                

	}